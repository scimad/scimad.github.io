---
layout: post
title:  "Fixing CORS & Loopback Errors When Exposing an Angular Dev Server with ngrok"
date:   2026-03-11 11:35:00 +1100
categories: programming
---
While exposing a local Angular frontend through **ngrok**, I ran into multiple errors when the frontend tried to call a backend API running on `localhost`. This post documents the exact problem and the working solution.

---

# Setup

Local development environment:

```
Angular frontend: http://localhost:4200
Node backend API: http://localhost:3000
```

The frontend was exposed using **ngrok**:

```
https://<random>.ngrok-free.dev → localhost:4200
```

The Angular app called the API at:

```
http://localhost:3000/api/<some-endpoint-path>
```

---

# The Errors

## 1. Invalid Host Header

When accessing the app via the ngrok URL, Angular's dev server rejected the request:

```
[webpack-dev-server] Invalid Host/Origin header
```

This happens because Angular's dev server (webpack-dev-server) only accepts requests from `localhost` by default.

---

## 2. CORS / Loopback Security Error

After fixing the host header issue, API requests failed with:

```
Access to XMLHttpRequest at 'http://localhost:3000/api/<some-endpoint-path>'
from origin 'https://<ngrok-domain>' has been blocked by CORS policy:
Permission was denied for this request to access the `loopback` address space.
```

This is **not a typical CORS problem**.

Modern browsers block requests from a **public website** to a **local network address (localhost)** as part of **Private Network Access (PNA)** security protections.

From the browser’s perspective the request looked like this:

```
Public Internet (ngrok site)
        ↓
http://localhost:3000
```

Browsers block this to prevent websites from probing services on a user's local machine.

---

# Correct Solution

Instead of letting the browser call the backend directly, the Angular dev server should **proxy the request locally**.

The browser only talks to the Angular server, which then forwards the request to the backend.

```
Browser
   ↓
https://<ngrok-domain>/api/*
   ↓
Angular dev server (localhost:4200)
   ↓
Proxy
   ↓
http://localhost:3000/api/*
```

This avoids both CORS and loopback restrictions.

---

# Implementation

## 1. Create Angular proxy config

Create `proxy.conf.json` in the project root:

```json
{
  "/api": {
    "target": "http://localhost:3000",
    "secure": false,
    "changeOrigin": true,
    "logLevel": "debug"
  }
}
```

---

## 2. Use relative API URLs

Instead of calling the backend with an absolute URL:

```
http://localhost:3000/api/<some-endpoint-path>
```

Use a relative path:

```
/api/<some-endpoint-path>
```

Example environment config:

```ts
export const environment = {
  production: false,
  api: {
    serverUrl: ''
  }
};
```

Then in services:

```ts
this.http.get(`${environment.api.serverUrl}/api/<some-endpoint-path>`);
```

---

## 3. Start Angular with proxy enabled

Run Angular with:

```
ng serve --host 0.0.0.0 --disable-host-check --proxy-config proxy.conf.json
```

This also resolves the **Invalid Host Header** error when using ngrok.

---

## 4. Start ngrok

Expose the Angular dev server:

```
ngrok http 4200
```

Open the generated URL:

```
https://<random>.ngrok-free.dev
```

---

# Result

Requests now flow correctly:

```
https://<ngrok-domain>/api/<some-endpoint-path>
        ↓
Angular dev server proxy
        ↓
http://localhost:3000/api/<some-endpoint-path>
```

No CORS issues, no loopback restrictions, and only a single ngrok tunnel is required.

---

# Key Takeaways

* Browsers block **public → localhost** requests due to **Private Network Access** protections.
* Exposing only the frontend via ngrok will break direct calls to `localhost` APIs.
* Use the **Angular dev proxy** so the browser never talks directly to `localhost:3000`.
* Always use **relative API paths (`/api/...`)** in development.

---

This approach keeps the development setup simple, avoids CORS headaches, and works with a **single ngrok tunnel on the free plan**.

----------
Last Updated: 2026-03-11 11:35:00 +1100
Author: Madhav Om (scimad)