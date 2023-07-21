#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define PROMPT "#Sadqe&Peter$ "
/**
 * main - Entry point of the simple shell.
 *
 * Return: Always 0.
 */
int main(void)
{
char buffer[1024];
ssize_t n;
char *argv[2];

while (1)
{
write(STDOUT_FILENO, PROMPT, 16);

n = read(STDIN_FILENO, buffer, sizeof(buffer));
if (n == -1)
{
perror("read");
exit(EXIT_FAILURE);
}

if (n == 0)
{
write(STDOUT_FILENO, "\n", 1);
break;
}

if (buffer[n - 1] == '\n')
buffer[n - 1] = '\0';

argv[0] = buffer;
argv[1] = NULL;

if (execve(buffer, argv, NULL) == -1)
{
perror(buffer);
}

write(STDOUT_FILENO, "\n", 1);
}

return (0);
}
