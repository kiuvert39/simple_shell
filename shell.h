#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdbool.h>

void kliu_print(const char *data);
void prompt_display(void);
void execut_cmd(const char *cmd);
void input_prompt(char *input_prompt, size_t size);

#endif
