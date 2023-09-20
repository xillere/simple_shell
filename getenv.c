#include "shell.h"

/**
 * _getenv - prints the environment
 * @name: string
 * Return: Always 0.
 */
char *_getenv(const char *name)
{
	unsigned int i;
	char *absvar;
	char *value;

	i = 0;
	while (environ[i] != NULL)
	{
		if (_strncmp(name, environ[i], _strlen(name)) == 0)
		{
			absvar = environ[i] + _strlen(name) + 1;
			value = malloc(sizeof(char) * _strlen(absvar) + 1);
			_strcpy(value, absvar);
			return (value);
		}
		i++;
	}
	return (NULL);
}
