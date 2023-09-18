#include "shell.h"

int shell_loop()
{
	getinput();
	splitintostr();
	process();

	return 0;
}
