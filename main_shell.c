#include "shell.h"

/**
 * main - this is the main function that runs all the other functions
 *
 * Return: it returns 0
 *
 */


int main(void)
{
	char input_command[120];

	while (true)
	{
		prompt_display();
		input_prompt(input_command, sizeof(input_command));
		execut_cmd(input_command);
	}

	return (0);
}
