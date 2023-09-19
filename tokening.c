#include "shell.h"
/**
 * tokenize - splits strings
 * @b: string
 * @delim: character to identify where the split happens
 *
 * Return: split string
 **/
char **tokenize(char *b, char *delim)
{
	int i;
	char *tok;
	char **tokens;

	tokens = malloc(sizeof(char *) * 64);
	i = 0;
	tok = strtok(b, delim);
	while (tok != NULL)
	{
		tokens[i] = tok;
		tok = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	return (tokens);
}
