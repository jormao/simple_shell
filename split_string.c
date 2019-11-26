#include "my_shell.h"

/**
 * words_in_string - counts the words in the string
 * @str: full string
 * @delim: character that separate the words
 *
 * Return: numbers of words
 */

int words_in_string(char *str, char *delim)
{
	int i = 0, cd = 0;
	char *temp;

	temp = str;

	while (temp[i])
	{
		if (temp[i] == delim[0])
			cd++;
		i++;
	}

	return (cd + 1);
}

/**
  * split_string - Extract tokens from strings
  * @str: string to token
  * @delim: delims to separate words
  *
  * Return: array whit words tokenized
  */

char **split_string(char *str, char *delim)
{
	char **words = NULL, *token, *buffer;
	int i = 0, aux = 0, count_words = 0, j = 0;

	while (str[j])
	{
		if (str[j] == '\n')
			str[j] = '\0';
		j++;
	}

	count_words = words_in_string(str, delim);
	buffer = malloc(sizeof(char) * (strlen(str) + 1));
	if (!buffer)
		return (NULL);
	words = malloc(sizeof(char *) * (count_words + 1));
	if (!words)
		return (NULL);
	strcpy(buffer, str);
	token = strtok(buffer, delim);

	while (token)
	{
		words[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (!words[i])
		{
			for (aux = i; aux >= 0; aux--)
				free(words[aux]);
			free(words);
			return (NULL);
		}
		strcpy(words[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	words[i] = NULL;
	free(buffer);
	return (words);
}

/**
 * index_function - test the array and choose the correct function to use
 * @buffer: string with commands send by console
 * @envp: enviroment
 *
 */

void index_function(char *buffer, char **envp)
{
	int flag = 0;
	char **array_words, *e_path = NULL;
	struct stat find_command;

	e_path = found_path(envp);
	array_words = split_string(buffer, " ");
	if (!(_strcmp(array_words[0], "exit")))
		flag = exit_function(array_words, buffer);
	else if (array_words[0] == NULL)
		perror("./hsh");
	else if (!(_strcmp(array_words[0], "env")))
		print_env(envp);
	else if (stat(array_words[0], &find_command) == 0)
		flag = 1;
	else
		flag = check_in_path(array_words, e_path);
	if (flag == 1)
		_fork(array_words, envp);
	if (flag == 0)
		perror("./hsh");
	free_function(array_words);
}