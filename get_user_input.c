#include "shell.h"

void user_input(char *input, size_t size)
{
	if (fgets(input, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			kliu_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			kliu_print("Error while reading input\n");
			exit(EXIT_FAILURE);
		}
	}
	input[strcspn(input, "\n")] = '\0';
}
