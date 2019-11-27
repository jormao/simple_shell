# simple_shell

## DESCRIPTION

The shell is a program that presents a command line interface that allows you to control your computer using commands entered with a keyboard.

## Libraries

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

## USED PROTOTYPES AND THEIR VARIABLES

/* functions in split_string.c: */
int words_in_string(char *str, char *delim);
char **split_string(char *str, char *delim);
void index_function(char *buffer, char **envp);
int _atoi(char *s);
int exit_function(char **array_words, char *buffer);

/* functions in fork_out.c: */
int _fork(char **arr, char **envp);
int check_in_path(char **array_words, char *e_path);

/* functions in functions.c: */
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
char *_strcat(char *dest, char *src);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* functions in more_functions.c: */
void sig_handler(int sig);
char *found_path(char **envp);
int _strcmp(char *s1, char *s2);
void print_env(char **envp);
void free_function(char **double_point);

In addition to commands, shells offer other elements to improve their functionality, such as variables, functions or control structures. The set of commands and elements available, as well as their syntax, will depend on the particular shell used.

## how to use it

The command is a sequence of words or tokens
separated by delimiters. The first word
specifies the name
of the command to be executed. The remaining words are passed as arguments to the summoned command.
The command name is passed as an argument.

## Example

	#!/bin/bash
	to_print='Hello world'
	echo $to_print
	to_print=5.5
	echo $to_print

## Example

## ls -l

total 12
-rw-r--r-- 1 root root  100 apr  6 21:19 file.txt
drwxr-xr-x 3 root root 4096 apr  7 01:44 file2
drwxr-xr-x 2 root root 4096 apr  6 22:19 file3

## Example

root@kali:~# cd ejemplos/carpeta2
root@kali:~/ejemplos/carpeta2# pwd
/root/ejemplos/carpeta2
 

## CONTRIBUTORS

Jorge Salazar - jormao@gmail.com
Julian Castañeda - 1277@holbertonschool.com
