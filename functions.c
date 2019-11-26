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

/**
 * _strncmp - function that that compares n chars of two strings
 * @s1: first value to compare
 * @s2: second value to compare
 * @n: number of chars to compare
 *
 * Return: 0 if are equal, else other number
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i = 0, j = 0, k, m = 0;

	while (s1[i] != 0)
	{
		i++;
	}
	while (s2[j] != 0)
	{
		j++;
	}
	for (k = 0; k < n; k++)
	{
		if (s1[k] != s2[k])
		{
			m = (s1[k] - '0') - (s2[k] - '0');
			break;
		}
	}
	return (m);
}

/**
 * _strcat - function that concatenates two strings
 * @dest: value dest to concatenar
 *@src: second value to concatenar
 *
 * Return: char concatenado
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0)
	{
		j++;
	}
	for (k = 0; k < j; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
