#include "shell.h"
#include <stdio.h>

/**
 * execute_command - function that executes commands from user input
 * @command: the command to execute
 */
void commandexe(const char *prompt)
{
	pid_t child_procId = fork();

        if (child_procId == -1)
        {
                perror("fork");
                exit(EXIT_FAILURE);
        }
        else if (child_procId == 0)
        {
                execlp(prompt, prompt, (char *)NULL);
                perror("execlp");
                exit(EXIT_FAILURE);
        }
        else
        {
                wait(NULL);
        }



}
