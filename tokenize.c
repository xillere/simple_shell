#include "shell.h"
/**
 * tokenize - this splits the string
 * @b: string to be split
 * @delim: object used to indicate where the split should take place
 * Return: split string
 **/
char **tokenize(char *str, char *delim)
{
        int i;
        char *tok;
        char **tokens;

        tokens = malloc(sizeof(char *) * 64);
        i = 0;
        tok = strtok(str, delim);
        while (tok != NULL)
        {
                tokens[i] = tok;
                tok = strtok(NULL, delim);
                i++;
        }
        tokens[i] = NULL;
        return (tokens);
}
