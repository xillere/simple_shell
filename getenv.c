#include "shell.h"

extern char **environ;
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
		if (strncmp(name, environ[i], strlen(name)) == 0)
		{
			absvar = environ[i] + strlen(name) + 1;
			value = malloc(sizeof(char) * strlen(absvar) + 1);
			strcpy(value, absvar);
			return (value);
		}
		i++;
	}
	return (NULL);
}
