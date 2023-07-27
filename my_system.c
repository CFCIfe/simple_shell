#include "main.h"

/**
* my_system - Custom system function to execute a system command
* @command: The command to be executed
*
* Return: Exit status of the executed command
*/
int my_system(const char *command)
{
pid_t pid;
int status;

pid = fork();
if (pid < 0)
{
perror("fork error");
return -1;
}
else if (pid == 0)
{
execl("/bin/sh", "sh", "-c", command, NULL);
_exit(EXIT_FAILURE);
}
else
{
waitpid(pid, &status, 0);
if (WIFEXITED(status))
{
return WEXITSTATUS(status);
}
else
{
return -1;
}
}
}

