---
layout: page
title: C++
permalink: /c++/
---

<div class="home">

  <ul class="post-list">
    {% for post in site.posts %}
      {% if post.categories contains 'c++' %}
      <li>
        <span class="post-meta">{{ post.date | date: "%b %-d, %Y" }}</span>

        <h2>
          <a class="post-link" href="{{ post.url | prepend: site.baseurl }}">{{ post.title }}</a>
        </h2>
      </li>
      {% endif %}
    {% endfor %}
  </ul>

  <p class="rss-subscribe">subscribe <a href="{{ '/feed.xml' | prepend: site.baseurl }}">via RSS</a></p>

  <div class="fb-comments" data-href="https://scimad.github.io/" data-width="600" data-numposts="5"></div>

</div>