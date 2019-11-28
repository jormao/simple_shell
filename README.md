# simple_shell

## DESCRIPTION

The shell is a program that presents a command line interface that allows you to control your computer using commands entered with a keyboard.

This shell is built as the final project of the study done at Holberton School on programming language c.

The behavior of our Shell is identical to that of sh. 

## Installation

You can install the simple shell cloning this repository:

```
https://github.com/jormao/simple_shell
```
Compile this files with this command:

```
$ gcc -Wall -Werror -Westra -pedantic -ggdb3 *.c -o hsh
```

Finally you can run our shell writing:

```
./hsh
```

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

The command is a sequence of words or tokens separated by delimiters. The first word specifies the name
of the command to be executed. The remaining words are passed as arguments to the summoned command.
The command name is passed as an argument.

## Example

### ls -l

	```
	($) ls -l
total 121
-rwxrwxrwx 1 vagrant vagrant   208 Nov 27 15:24 AUTHORS
-rwxrwxrwx 1 vagrant vagrant  1539 Nov 27 19:04 fork_out.c
-rwxrwxrwx 1 vagrant vagrant  2076 Nov 26 15:43 functions.c
-rwxrwxrwx 1 vagrant vagrant 85805 Nov 28 00:45 hsh
-rwxrwxrwx 1 vagrant vagrant  5920 Nov 26 17:14 man_1_simple_shell
-rwxrwxrwx 1 vagrant vagrant  1446 Nov 26 16:12 more_functions.c
-rwxrwxrwx 1 vagrant vagrant  1005 Nov 26 21:12 my_shell.h
-rwxrwxrwx 1 vagrant vagrant   749 Nov 27 19:00 prompt.c
-rwxrwxrwx 1 vagrant vagrant  2178 Nov 27 15:24 README.md
-rwxrwxrwx 1 vagrant vagrant  3530 Nov 28 00:45 split_string.c
($)
```

## Example

### pwd

```
($) pwd
/home/vagrant/simple_shell
($)
```

## Example

### echo

```
($) echo hello world
hello world
($)
```

## CONTRIBUTORS

Jorge Salazar - jormao@gmail.com
Julian Castañeda - 1277@holbertonschool.com
