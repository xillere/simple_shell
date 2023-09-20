#include "shell.h"

/**
 * main - shell
 * Return: 0 on success
 **/

int main(void)
{
	ssize_t read;
	char *buffer, *token;
	char *split[64];
	size_t len = 0;
	int count;
	pid_t cp;

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
		token = strtok(buffer, " ");
		count = 0;
		while (token != NULL)
		{
			split[count] = token;
			token = strtok(NULL, " ");
			count++;
		}
		split[count] = NULL;
		cp = fork();
		if (cp == 0)
		{
			if (execve(split[0], split, NULL) == -1)
			{
				perror("./hsh");
			}
			else
			{
				wait(NULL);
			}
		}
	}
	free(buffer);

	return (0);
}
