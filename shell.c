#include "shell.h"

/**
 * main - shell
 *
 * Return: 0 on success
 **/

int main()
{
	ssize_t read;
	char *buffer, *token;
	char **split;
	size_t len = 0;
	int count;
	int i = 0;
	
	buffer = NULL;

	while (1)
	{
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
		split = malloc(sizeof(char *) * 64);
		token = strtok(buffer, " ");
		count = 0;
		while (token != NULL)
		{
			split[count] = token;
			token = strtok(NULL, " ");
			count++;
		}
		split[count] = NULL;




	       	
	}
	return 0;
}
