#include "my_shell.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: First operand
 *
 * Return: la longitud del string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies the string pointed by src to dest
 *@dest: first value to check
 *@src: Second value to check
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{

	char *i = src;
	int j = 0;

	while (*i != '\0')
	{
		dest[j] = src[j];
		i++;
		j++;
	}
	dest[j] = src[j];
	return (dest);
}
