#include "shell.h"


int main(void)
{
	char input_command[120];
	
	while (true)
	{
		prompt_display();
		input_prompt(input_command, sizeof(input_command));
		execut_cmd(input_command);
	}	

	return 0;
}
