#include "shell.h"
/**
 * builtin - builtins
 * @args: arguments
 * Return: nothing
 **/

void builtin(char **args)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		exit(atoi(args[1]));
	}
}
