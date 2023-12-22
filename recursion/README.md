![6480d9b63a806a1b35fec007_Holberton](https://github.com/chloe0524/holbertonschool-low_level_programming/assets/127857895/b53938c1-ac78-4645-9b19-dadb3de51a62)

# Holberton School Simple Shell Project

## Description

This is a custom implementation of a "simple shell" in C, created as part of the Holberton School curriculum. 
The project includes a set of functions 
## :file_folder: Files

- `main.h`: Header file containing function prototypes and necessary includes.
- `simple_shell_main.c`: The main function of the shell.
- `fill_argv.c`: Transform input characters into tokens.
- `print_env.c`: Get the environnement for when you enter env.
- `getenv.c`: `Getenv` function to get the path of the command input.
- `exec_exists_cmd.c`: Implementation of the execute command associated to the path.
- `shell_errors.c`: Implementation of supporting function for errors.
- `man_1_simple_shell`: Manual page for the custom `simple_shell` programm.

##Functions and system calls used

`execve`, `exit`, `fflush`, `fork`, `free`, `getline`, `getpid`, `isatty`, `malloc`, `perror`, `printf`, `fprintf`, `sprintf`, `putchar`, `signal`, `stat`, `strtok`, `wait`, `write`

Environment  
:--------------------------------------------------: |
Language: C  
OS: Ubuntu 20.04 LTS  
Compiler: gcc  
Style guidelines: Betty style

## Usage

To use the custom `simple_shell` programm, include the `main.h` header file in your program and compile all the files associated. Then run the exectuable `./hsh`in our case so you enter in this simple shell. Then, you can use it as a normal shell. Moreover, this programm handle arguments commands such as *ls -l*, and also works in non-interactive (but be cautious, it only works with | for now).
```c
./hsh
#simple_shell(*current_pid*)$
```

### Compilation
``` bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

### Man page
``` bash
man ./man_1_simple_shell
```
### :floppy_disk: Examples

Display the list of directory content:
```
./hsh
#simple_shell(*current_pid*)$ ls
AUTHORS            getenv.c  man_1_simple_shell  shell_errors.c
exec_exists_cmd.c  hsh       print_env.c         simple_shell_main.c
fill_argv.c        main.h    README.md
#simple_shell(*current_pid*)$
```
----------
Display the list of directory content in a long listing format:
```
#simple_shell(*current_pid)$ ls -l
total 64
-rw-r--r-- 1 root root   172 Dec 12 00:09 AUTHORS
-rw-r--r-- 1 root root  2596 Dec 22 07:38 exec_exists_cmd.c
-rw-r--r-- 1 root root   847 Dec 22 07:38 fill_argv.c
-rw-r--r-- 1 root root   513 Dec 20 00:06 getenv.c
-rwxr-xr-x 1 root root 18400 Dec 22 07:47 hsh
-rw-r--r-- 1 root root   513 Dec 22 07:38 main.h
-rw-r--r-- 1 root root  5244 Dec 22 07:38 man_1_simple_shell
-rw-r--r-- 1 root root   210 Dec 22 07:38 print_env.c
-rw-r--r-- 1 root root  1971 Dec 22 07:55 README.md
-rw-r--r-- 1 root root   174 Dec 22 07:38 shell_errors.c
-rw-r--r-- 1 root root  1052 Dec 22 07:38 simple_shell_main.c
#simple_shell(*current_pid*)$
```
----------
Non-interactive mode:
```
root@970d48fbae6b:/holbertonschool-simple_shell# echo ls | ./hsh
AUTHORS            getenv.c  man_1_simple_shell  shell_errors.c
exec_exists_cmd.c  hsh       print_env.c         simple_shell_main.c
fill_argv.c        main.h    README.md
root@970d48fbae6b:/holbertonschool-simple_shell#
```
----------
Exit the programm:
```
#simple_shell(*current_pid*)$ exit
root@970d48fbae6b:/holbertonschool-simple_shell#
```
----------

## Authors :pencil2:

- Chloé Correia
- Jonathan Ismaël
- Nathan Raynal
