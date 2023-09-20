#include "shell.h"

/**
 * printenv - builtin env func
 * @e: environment variable
 * Return: NULL
 **/

void printenv(char **e)
{
	int i = 0;

	while (e[i] != NULL)
	{
		printf("%s\n", e[i]);
		i++;
	}
}

/**
 * builtin - builtins
 * @args: arguments
 * Return: nothing
 **/

void builtin(char **args)
{
	int i;

	if (_strcmp(args[0], "exit") == 0)
	{
		i = 0;

		if (args[1] != NULL)
		{
			i = atoi(args[1]);
		}
		exit(i);
	}
	if (_strcmp(args[0], "env") == 0)
	{
		printenv(environ);
	}
}
