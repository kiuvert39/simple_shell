#include "shell.h"

/**
 * execut_cmd - function that execute commandas
 *
 * @cmd: the main command to be executed
 */

void execut_cmd(const char *cmd)
{
	pid_t child_processId = fork();

	if (child_processId == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_processId == 0)
	{
		execlp(cmd, cmd, (char *)NULL);
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
