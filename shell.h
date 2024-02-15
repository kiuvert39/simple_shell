#ifndef SHELL_H
#define SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <sys/wait.h>


void kliu_print(const char *value);
void get_input_prompt(void);
void command_exe(const char *prompt);
void user_input(char *input, size_t size)

#endif
