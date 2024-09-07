---
layout: post
title:  "Welcome to Jekyll!"
date:   2019-05-03 00:50:25 +0545
categories: jekyll update
---

  Jekyll Installation:
  MacOS:
  - `brew install chruby ruby-install`
  - `/opt/homebrew/bin/ruby-install ruby 3.3.5`
  - run following (or autorun via `.bash_profile`)  
  `export PATH=/Users/madhav/.rubies/ruby-3.3.5/bin:$PATH`
  - `gem install bundler`
  - `gem install jekyll`

You’ll find this post in your `_posts` directory. Go ahead and edit it and re-build the site to see your changes. You can rebuild the site in many different ways, but the most common way is to run `jekyll serve`, which launches a web server and auto-regenerates your site when a file is updated.

To add new posts, simply add a file in the `_posts` directory that follows the convention `YYYY-MM-DD-name-of-post.ext` and includes the necessary front matter. Take a look at the source for this post to get an idea about how it works.

Jekyll also offers powerful support for code snippets:

{% highlight ruby %}
def print_hi(name)
  puts "Hi, #{name}"
end
print_hi('Tom')
#=> prints 'Hi, Tom' to STDOUT.
{% endhighlight %}

Check out the [Jekyll docs][jekyll-docs] for more info on how to get the most out of Jekyll. File all bugs/feature requests at [Jekyll’s GitHub repo][jekyll-gh]. If you have questions, you can ask them on [Jekyll Talk][jekyll-talk].


***I was about to delete this post, but I thought "Why? Why not let someone see how blogs are made in jekyll? And also, why delete a post that's already there?"***

[jekyll-docs]: http://jekyllrb.com/docs/home
[jekyll-gh]:   https://github.com/jekyll/jekyll
[jekyll-talk]: https://talk.jekyllrb.com/
