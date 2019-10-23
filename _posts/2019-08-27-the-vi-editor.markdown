---
layout: post
title:  "Using NVIM Editor"
date:   2019-08-27 17:51:00 +054
categories: programming editor 
---
Programmer's like to be nerdy! And programmers are depicted as nerds. Of course, I won't open up gedit to impress my sister. That's not it. I researched a little before actually jumping into vi if it is worth investing time upon and yeah, it's debatable, but what I found true; which is true in general as well; is the more you invest your time, the better you will be and once you master it, you will start using vim like a language, like talking and giving command to the editor. That clicked the *yes* button. Once I started using it, I found the navigation keys being used in many other gui applications as well as other editor's as well, as plugins or as "vi mode". Anyway, I am enjoying it.

I am using NeoVIM; nvim. It is a "hyperextensible Vim-based text editor" as they put it. And it is really not that bad. Every day I am learning new shortcut keys that is making my navigation easier and faster. And the more I am using it, the more I am liking it! There is absolutely no reason I regret learning vim based editors but as of right now (2019-08-28), I am not in the position to actually recommend you to switch from your comfrotable text editors or IDEs to vim based editors.

So, in this post I want to list down the shortcut keys that I use the most or have found useful, so that I could refer back if I need to someday. The order will mostly be the same as I had learned it in.

## So the commands:
**i**       -- Go to insert mode (Remember there are two modes in vi, Command mode and Insert Mode). Puts the cursor before the highlighted character.  
**Esc Key** -- Go to command mode. Clean any *command buffer*. The navigation keys and other commands works only in the command mode.  
**a**       -- Go to insert insert mode. Puts the cursor after the highlighted character.  
**H J K L** -- Beautiful navigation arrows  
**A**       -- Go to insert mode. Puts the cursor at the end of the line.  
**d**       -- Ready for deletion. The next command followed actually decides what to delete. Explained below.  
**dw**      -- Deletes the word. Note that commands are flexible like languages and have subtle differences in vi. Eg. **d5w** means delete five words. More examples below.  

Okay, at this point, I realize, it might have been better if I had categorized the commands / shortcuts into different categories such as navigation, clipboard operations, deleting, editing or things like that but since the way I am going here is exactly the way I learned it, or the way we learn using typical commands, it shouldn't be that bad. So, lets continue further.

**dd**      -- Delete line.  
**b w e**   -- Navigation keys. Go to the beginning of word on left. Go to the beginning of word to the right. Go to the end of word to the right. (You can use this like **dw** command as well, i.e. You can think of it as **db** or **de** commands. But what actually happening is the delete command **d** was waiting for selection to be deleted and **w**, **b**, **e** provide the content for deletion. You can use it along ith numbers as well, as was stated in the **dw** command above.)  
*:q*        -- Quit. (Use *:q!*) for force quit. Also, you might notice what the **:** does. It prompts a new input where. This is used frequently.  
*:w*        -- Save. (Use *:wq*) for save and quit.  
**y**        -- Yank (Copy)  
**x**        -- Delete highlighted characte (Actually puts that into clipboard, so it's like, 'cut' one letter)   
**p**        -- Put (Paste)

## Haven't I written about the search key?
**/**        -- Searches for text. Regex can be used (which I haven't yet)

## So that is the Vim philosophy they are talking about!
About a month ago, I learned something really interesting and really cool about Vim. It's about actually using Vim not as an editor that has many different commands that are; say; to be remembered and all that. I learned Vim is actually about using it as a language to talk to the editor, which would make editing like talking to Vim to do  task. And I also learned the navigation options like * and # which acts like searching but most importantly, I learned about the "repeatability" philosophy. I learned how the dot (.) can be used to repeat a set of commands and how one should try to use commands in the way that could be used repeatedly. 

Also, changing innerword **ciw** (and related commands such as **ci)**) made my editing more easier and at the same time more elegant.



<div class="fb-comments" data-href="https://scimad.github.io/work/2019/05/04/teaching-embedded-system.html" data-width="600" data-numposts="5"></div>

