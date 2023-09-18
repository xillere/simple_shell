#include "shell.h"
/**
 * _which - locates path and checks if it exists
 * @fname: the name the the path/ command to be appended
 *
 * Return: the existing path
 **/

char *_which(char *fname)
{

	char *path, *found;
	char **paths, search[MAX_VALUE];
	int i;
	struct stat st;
	path = _getenv("PATH");

	paths = tokenize(path, ":");
	i = 0;
	while (paths[i] != NULL)
	{
		_memset(search, 0 ,MAX_VALUE);
		strcpy(search, paths[i]);
		strcat(search, "/");
		strcat(search, fname);
		if(stat(search, &st) == 0)
		{
			found = malloc(sizeof(char) * strlen(search) + 1);
			if (found == NULL)
			{
				return (NULL);
			}
			strcpy(found, search);
			/*free2D(paths);*/
			/*free(path);*/
			return (found);
		}
		else
		{
			i++;
		}
	}
	/*if (check = 1)
		free2D(paths);*/
	return (NULL);
}
