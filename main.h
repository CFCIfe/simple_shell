#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INPUT_LENGTH 1024

/* 1-read_and_parse.c */
char *read_line(void);
char **parse_line(char *line);

/* 2-execute_command.c */
void execute_command(char **args);

#endif /* MAIN_H */
