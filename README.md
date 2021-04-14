![Holberton logo](https://www.holbertonschool.com/holberton-logo.png)

# Simple Shell
15 day end of first trimester project for Holberton School - Cohort 14 - April 2021.
 ## Description
 This is a UNIX command line interpreter. it takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as LINUX. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.
 On most linux systems a program called bash (which stands for Bourne Again Shell, an enhanced version of the original Unix shell program , sh, written by Steve Bourne) acts as the shell program. Besides bash, there are other shell programs available for LINUX sys.
 Usage: `simple_shell`
 It: Displays a prompt and waits for the user to type a command. A command line always ends with a new line. The prompt is displayed again each time a command has been executed. The command lines are simple, no semicolons, no pipes, redirections or any advanced features. The command lines are made only of one word. Arguemtns can be passed to programs. If an executable cannot be found, prints an error message and and displays the prompt again. It can handle errors. It also handles the  "end of file" condition (Ctrl + D) handles the PATH to exit built-in, that exits the shell uses the env as a built-in, that prints the current environment Handles Ctrl+C: the shell does not quit when the user inputs ^C Handles the built in command cd (cd [directory], cd .. and cd)
## Getting started
This shell is compiled by this way:
### Compilation

    gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
### Usage
It works both:
Interactive mode:

    $ ./hsh
    (#C_isFun) /bin/ls
    hsh main.c token.c
    (#C_isFun)
    (#C_isFun) exit
    $
 Non-interactive mode:


    $ echo "/bin/ls | ./hsh
    hsh main.c token.c
    $
 ### Executable commands
 Input commands followed by an enter. Some examples shown below:


    (#C_isFun) ls -la
    (#C_isFun) /bin/ls
    (#C_isFun) pwd
    (#C_isFun) mkdir [dirname]
    (#C_isFun) cd [dirname]
    (#C_isFun) cd ..
    (#C_isFun) rmdir [dirname]
To exit program:

    (#C_isFun)exit
## File manifest
|**File**| **Description** |
|--|--|
| main.c | The main function|
|holberton.h| list all the necessary libraries and function prototypes|
|AUTHORS | Creators|
|README.md|	|
|Builtin.c||
|controld.c||
|errors.c||
|execute1.c||
|strfunctions.c||
|token.c||
|validators.c||
### Restrictions
List of allowed functions and system calls:

  -   access (man 2 access)
-   chdir (man 2 chdir)
-   close (man 2 close)
-   closedir (man 3 closedir)
-   execve (man 2 execve)
-   exit (man 3 exit)
-   _exit (man 2 _exit)
-   fflush (man 3 fflush)
-   fork (man 2 fork)
-   free (man 3 free)
-   getcwd (man 3 getcwd)
-   getline (man 3 getline)
-   getpid (man 2 getpid)
-   isatty (man 3 isatty)
-   kill (man 2 kill)
-   malloc (man 3 malloc)
-   open (man 2 open)
-   opendir (man 3 opendir)
-   perror (man 3 perror)
-   read (man 2 read)
-   readdir (man 3 readdir)
-   signal (man 2 signal)
-   stat (__xstat) (man 2 stat)
-   lstat (__lxstat) (man 2 lstat)
-   fstat (__fxstat) (man 2 fstat)
-   strtok (man 3 strtok)
-   wait (man 2 wait)
-   waitpid (man 2 waitpid)
-   wait3 (man 2 wait3)
-   wait4 (man 2 wait4)
-   write (man 2 write)
## FLowchart
<details>
 <img src="https://github.com/jj131204/simple_shell/blob/master/Features/flow_chart.jpg" />
</details>

## Authors
**Juan Jose Arteta**

 - [ ] [Social media](https://twitter.com/jarteta2004)
 - [ ] [Contact me!](https://github.com/jj131204)

**Duvan Rodelo**
 - [ ] [Social media](https://twitter.com/duvanrode1o)
 - [ ] [Contact me!](https://github.com/Rode1o)


### Date
Start  31/Mar/21 - End 15/Apr/21
####
#### [Copyright](https://github.com/jj131204/simple_shell/blob/master/LICENSE)
