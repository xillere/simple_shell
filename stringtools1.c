#include "shell.h"

/**
 * _strlen - length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're
 * equal, more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strcat - Concatenates the string pointed to by @src,
 * including the terminating null byte,
 * to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int initial_end;
	int j;

	initial_end = _strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[initial_end + j] = src[j];
		j++;
	}
	dest[initial_end + j] = '\0';

	return (dest);
}
