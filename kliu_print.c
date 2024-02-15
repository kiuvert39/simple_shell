#include "shell.h"
/**
 * kliu_print - function that print a string to the screen
 * 
 * @data: data to be printed
*/

void kliu_print(const char *data)
{
    write(STDOUT_FILENO, data, strlen(data));
}
