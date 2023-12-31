#include "shell.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 i* to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
/**
 * _strncmp - compares n bytes of a string
 * @s1: first str
 * @s2: second str
 * @n: n bytes
 * Return: 0 on success
 **/
int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}

	if (*s1 == '\0')
	{
		return (0);
	}

	s1++;
	s2++;
	}

	return (0);
}
