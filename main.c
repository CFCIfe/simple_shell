#include "main.h"

/**
 * main - Entry point of the simple shell.
 *
 * Return: On success, returns 0. Otherwise, returns an error code.
 */
int main(void)
{
char *line;
char **args;

while (1)
{
printf("($) ");
line = read_line();
args = parse_line(line);
execute_command(args);

free(line);
free(args);
}

return (0);
}
