# simple_shell
A simple shell group project with Soukaina Sadeq for the ALX SE Program

### Run the following

`bash ./hack/generate-authors.sh `

### ChatGPT Prompt

An outline of the steps and features you need to implement to create a basic shell.

- Read and Parse Input:

    Use getline() to read input from the user.
    
    Parse the input into individual commands and arguments.

- Execute Commands:

    Use fork() to create a child process.
    
    Use execve() to execute the command in the child process.
    
    Use wait() or waitpid() to wait for the child process to finish.

- Handle Built-in Commands:

    Implement built-in commands like cd, exit, etc. These should be executed in the parent process directly, not through a child process.

- Handle Environment Variables:

    Implement support for environment variables like $HOME, $PATH, etc.

- Handle Signals:
    Handle signals like Ctrl+C (SIGINT) and Ctrl+Z (SIGTSTP). 
    
- Handle Redirection and Pipes:
    Implement support for input/output redirection (<, >, >>) and pipes (|).

- Handle Interactive and Non-Interactive Modes:
    Implement different behavior for interactive and non-interactive modes.

- Print the Shell Prompt:
    Display a prompt before reading user input.

- Error Handling: 
    Print informative error messages when commands are not found, or when there are other errors.

- Free Memory:
    Free any dynamically allocated memory.
