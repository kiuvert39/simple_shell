#include "shell.h"

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