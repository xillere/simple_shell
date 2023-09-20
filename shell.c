#include "shell.h"

/**
 * main - shell
 * Return: 0 on success
 **/

int main(void)
{
	char buffer[1024], *token;
	char *split[64];
	int count;
	pid_t cp;
	struct stat st;

	while (1)
	{
		input(buffer);
		token = strtok(buffer, " ");
		count = 0;
		while (token != NULL)
		{
			split[count] = token;
			token = strtok(NULL, " ");
			count++;
		}
		split[count] = NULL;
		builtin(split);
		if (stat(split[0], &st) == 0)
		{
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
	}
	free(buffer);

	return (0);
}
