#include "shell.h"

/**
 * main - shell
 *
 * Return: 0 on success
 **/

int main(int ac __attribute__((unused)), char **av __attribute__((unused)), char **env __attribute__((unused)))
{
	ssize_t read;
	char *buffer, *token;
	char **split;
	size_t len = 0;
	int count;
	pid_t cp;
	struct stat st;
	
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
		if (stat(split[0], &st) == 0)
		{
			cp = fork();
			if (cp == 0)
			{
				if (execve(split[0], split, NULL) == -1)
				{
					perror("No such file or directory\n");
				}
				else
				{
					wait(NULL);
					free(split);
				}
			}
			free(split);
		}





	       	
	}
	return 0;
}
