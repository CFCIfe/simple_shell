#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

char *my_strtok(char *str, const char *delimiters);
int my_system(const char *command);

#endif /* MAIN_H */
