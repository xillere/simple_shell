#include "shell.h"

int shell_loop()
{
	char buff[BUFFER_SIZE];
	char **split;
	char *del;
	int i = 0;
	del = " ";
	getinput(buff);
	split = tokenize(buff, del);

	while (split)
	{
		printf("%s\n",split[i]);
		i++;
	}

	return 0;
}
