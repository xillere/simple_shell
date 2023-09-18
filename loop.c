#include "shell.h"

int shell_loop()
{
	char buff[BUFFER_SIZE];
	getinput(buff);
	splitintostr();
	process();

	return 0;
}
