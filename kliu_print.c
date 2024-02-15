#include "shell.h"

/**
 * kliu_print - returns void
 * @value: parameter that is passed to be printed
 */

void kliu_print(const char *value)
{
	write(STDOUT_FILENO, value, strlen(value));
}
