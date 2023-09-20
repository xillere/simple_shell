#include "shell.h"

/**
 * input - a function to recieve input
 * @string: the input by user
 * Return: NULL
 **/



void input(char *string)
{
	char *buffer;
	size_t len = 0;

	buffer = NULL;
	read = getline(&buffer, &len, stdin);
	if (read == -1)
	{
		free(buffer);
		exit(0);
	}
	if (buffer[read - 1] == '\n')
	{
		buffer[read - 1] = '\0';
	}
	_strcpy(string, buffer);
}
