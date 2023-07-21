#include "main.h"

/**
 * read_line - Read a line of input from stdin.
 *
 * Return: The read line as a string.
 */
char *read_line(void)
{
char *line = NULL;
size_t bufsize = 0;
ssize_t characters_read;

characters_read = getline(&line, &bufsize, stdin);
if (characters_read == -1)
{
if (feof(stdin))
{
printf("\n");
exit(EXIT_SUCCESS);
}
else
{
perror("read_line");
exit(EXIT_FAILURE);
}
}

if (line[characters_read - 1] == '\n')
line[characters_read - 1] = '\0';

return (line);
}

/**
* parse_line - Split a line into arguments.
* @line: The line to be parsed.
*
* Return: An array of arguments (strings).
*/
char **parse_line(char *line)
{
const char *delimiters = " \t\r\n\a";
char **tokens = malloc(MAX_INPUT_LENGTH * sizeof(char *));
char *token;
int i = 0;

if (!tokens)
{
perror("parse_line");
exit(EXIT_FAILURE);
}

token = strtok(line, delimiters);
while (token)
{
tokens[i++] = token;
token = strtok(NULL, delimiters);
}
tokens[i] = NULL;

return (tokens);
}
