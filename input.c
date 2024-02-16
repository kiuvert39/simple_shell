#include "shell.h"

/**
 * input_prompt - this function is used to get user input
 *
 * @size: this parameter get the ssize of the input
 *
 * @input_prompt : this is the parameter that get the command
 *
 */

void input_prompt(char *input_prompt, size_t size)
{
	if (fgets(input_prompt, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			kliu_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			kliu_print("Error while reading\n");
			exit(EXIT_FAILURE);
		}
	}
	input_prompt[strcspn(input_prompt, "\n")] = '\0';
}
