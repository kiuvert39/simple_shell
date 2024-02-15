#include "shell.h"


int main(void)
{
	char input_command[128];


	while (true)
	{
		get_input_prompt();
		user_input(input_command, sizeof(input_command));
		command_exe(input_command);

	}

	return 0;
}
