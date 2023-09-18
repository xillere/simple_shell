#include "shell.h"
/**
 * getinput - recieves input from stin
 * @str: input to be returned
 * Return: str
 **/

void getinput(char *str)
{
	ssize_t readchar;
	size_t len = 0;
	char *buffer = NULL;

	readchar = getline(&buffer, &len, stdin);
	if (readchar == -1)
	{
		free(buffer);
		exit(EXIT_FAILURE);
	}
	if (buffer[readchar - 1] == '\n')
	{
		buffer[readchar - 1] = '\0';
	}

	_strcpy(str, buffer);
}
