# 0x16. C - Simple Shell
This is a project to write a simple shell usin c programming Language



## Acknowledgements

 - [The Unix Shell](https://en.wikipedia.org/wiki/Unix_shell)
 - [Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell)
 - [Ken Thompson](https://en.wikipedia.org/wiki/Ken_Thompson)
 
## Concepts
For this project, we expect you to look at these concepts:

Everything you need to know to start coding your own shell
Approaching a Project
Background Context
Write a simple UNIX command interpreter.


![logo](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)
^ ***“The Gates of Shell”, by Spencer Cheng, featuring Julien Barbier***

# Resources
### Read or watch:

Unix shell
Thompson shell
Ken Thompson
Everything you need to know to start coding your own shell concept page
man or help:

sh (Run sh as well)
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
>Who designed and implemented the original Unix operating system
>Who wrote the first version of the UNIX shell
>Who invented the B programming language (the direct predecessor to the C programming language)
>Who is Ken Thompson
>How does a shell work
>What is a pid and a ppid
>How to manipulate the environment of the current process
>What is the difference between a function and a system call
>How to create processes
>What are the three prototypes of main
>How does the shell use the PATH to find the programs
>How to execute another program with the execve system call
>How to suspend the execution of a process until one of its children terminates
>What is EOF / “end-of-file”?
## Copyright - Plagiarism
> You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
> You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
> You are not allowed to publish any content of this project.
> Any form of plagiarism is strictly forbidden and will result in removal from the program.
## Requirements
### General
> Allowed editors: vi, vim, emacs<br>
> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89<br>
> All your files should end with a new line<br>
> A README.md file, at the root of the folder of the project is mandatory<br>
> Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl<br>
> Your shell should not have any memory leaks<br>
> No more than 5 functions per file<br>
> All your header files should be include guarded<br>
> Use system calls only when you need to (why?)<br>
> Write a README with the description of your project<br>
> You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker
GitHub<br>
**There should be one project repository per group. If you and your partner have a repository with the same name in both your accounts, you risk a 0% score. Add your partner as a collaborator.**

### More Info
**Output**
> Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
> The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
> Example of error with sh:

> $ echo "qwerty" | /bin/sh<br>
> /bin/sh: 1: qwerty: not found<br>
> $ echo "qwerty" | /bin/../bin/sh<br>
> /bin/../bin/sh: 1: qwerty: not found<br>
$
> Same error with your program hsh:

> $ echo "qwerty" | ./hsh<br>
> ./hsh: 1: qwerty: not found<br>
> $ echo "qwerty" | ./././hsh<br>
> ./././hsh: 1: qwerty: not found<br>
> $

**List of allowed functions and system calls**
> access (man 2 access)<br>
> chdir (man 2 chdir)<br>
> close (man 2 close)<br>
> closedir (man 3 closedir)<br>
> execve (man 2 execve)<br>
> exit (man 3 exit)<br>
> _exit (man 2 _exit)<br?
> fflush (man 3 fflush)<br>
> fork (man 2 fork)<br>
> free (man 3 free)<br>
> getcwd (man 3 getcwd)<br>
> getline (man 3 getline)<br>
> getpid (man 2 getpid)<br>
> isatty (man 3 isatty)<br>
> kill (man 2 kill)<br>
> malloc (man 3 malloc)<br>
> open (man 2 open)<br><br>
> opendir (man 3 opendir)<br>
> perror (man 3 perror)<br>
> read (man 2 read)<br>
> readdir (man 3 readdir)<br>
> signal (man 2 signal)<br>
> stat (__xstat) (man 2 stat)<br>
> lstat (__lxstat) (man 2 lstat)<br>
> fstat (__fxstat) (man 2 fstat)<br>
> strtok (man 3 strtok)<br>
> wait (man 2 wait)<br>
> waitpid (man 2 waitpid)<br>
> wait3 (man 2 wait3)<br>
> wait4 (man 2 wait4)<br>
> write (man 2 write)

**Compilation**
***Your shell will be compiled this way:***
> gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

**Testing**
***Your shell should work like this in interactive mode:***

> $ ./hsh<br>
> ($) /bin/ls<br>
> hsh main.c shell.c<br>
> ($)<br>
> ($) exit<br>
> $<br>
***But also in non-interactive mode:***<br>

> $ echo "/bin/ls" | ./hsh<br>
> hsh main.c shell.c test_ls_2<br>
> $<br>
> $ cat test_ls_2<br><br>
> /bin/ls<br>
> /bin/ls<br>
> $<br>
> $ cat test_ls_2 | ./hsh<br>
> hsh main.c shell.c test_ls_2<br>
> hsh main.c shell.c test_ls_2<br>
> $

**Checks**
<br>
The Checker will be released at the end of the project (1-2 days before the deadline). We strongly encourage the entire class to work together to create a suite of checks covering both regular tests and edge cases for each task. See task 8. Test suite.



## Authors

- [@dtumuhaise](https://www.github.com/dtumuhaise)
- [@TheSaviourEking](https://www.github.com/TheSaviourEking)

![Logo](https://www.clipartkey.com/mpngs/m/168-1684252_c-programming-logo.png)
