#include "main.h"
int handel(char *buffer)
{
	int f, pid;
	char **ex = malloc(1024);

	/**wait for user to enter commands */
	ex = lsh_split_line(buffer);
	pid = fork();
	if (pid == -1)
	{
		exit(98);
	}
	else if (pid == 0)
	{
		f = execute(ex);
	}
	else
		wait(NULL);
	return (f);
}
