#include "shell.h"

/**
 * built_exit - exits the shell
 * @args: arguements
 *
 * Return: Nothing
 **/

void built_exit(char **args)
{
	int status, check;

	status = 0;
	if (args[1] != NULL)
	{
		status = atoi(args[1]);
		check = atoi(args[1]);
	}
	if (status < 0)
	{
		dprintf(STDERR_FILENO, "%s: 1: %s: Illegal number: %d\n",
				"./hsh", args[0], status);
		freeArray(args);
		exit(2);
	}
	if (check == 0)
	{
		dprintf(STDERR_FILENO, "%s: 1: %s: Illegal number: %s\n",
				"./hsh", args[0], args[1]);
		freeArray(args);
		exit(2);
	}
	if ((status > 255) && (status < 512))
	{
		status = status - 256;
	}
	if (status >= 512)
	{
		status = status % 256;
	}
	freeArray(args);
	exit(status);
}

