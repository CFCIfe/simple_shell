#include "main.h"

#define PROMPT "#Sadqe&Peter$ "

int main(void)
{
char buffer[1024];
ssize_t n;
char *token;

while (1)
{
write(STDOUT_FILENO, PROMPT, sizeof(PROMPT) - 1);

if ((n = read(STDIN_FILENO, buffer, sizeof(buffer))) == -1)
{
perror("read");
exit(EXIT_FAILURE);
}

if (n == 0)
{
write(STDOUT_FILENO, "\n", 1);
break;
}

buffer[n - 1] = '\0';

token = my_strtok(buffer, " ");
while (token != NULL)
{
int exit_status = my_system(token);
printf("Command exit status: %d\n", exit_status);
token = my_strtok(NULL, " ");
}
}

return 0;
}
