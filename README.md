## Description

This repo has our custom shell project, which attempts to replicate some of the
processes of the 'sh' shell or 'bash' shell.

### So, what's the deal with shell?
Basically, it takes a command, reads it, interprets it, and then executes it. It looks through a directory/file path to find the command you need, and then the kernel translates it all. You've got built-in commands (like cd) and executable files (which you call by name).
When you read a command, it breaks it into individual words. For example, echo “my name is Jane Doe” > README.md has the individual words echo, a string, redirection sign, and the new file name. That's called parsing/tokenization.
Then it's time to execute the command.

For more information view the blog post of Ibrahim Morketa & Simegnew Misganaw
[here](https://medium.com/@ibrahimbsc8/simple-shell-a-custom-shell-command-line-interpreter-a0d11d5b219f)

Or check out cool resources on youtube like this [here](https://www.youtube.com/watch?v=4jYFqFsu03A)

### C language standard functions and system calls utilized

`access`, `chdir`, `close`, `closedir`, `execve`, `exit`, `fork`,
`free`, `fstat`, `getcwd`, `getline`, `kill`, `lstat`, `malloc`,
`open`, `opendir`, `perror`, `read`, `readdir`, `signal`, `stat`,
`strtok`, `wait`, `waitpid`, `wait3`, `wait4`, `write`, `_exit`

## Brief Synopsis

All files in this repository are designed to compile with GNU compiler
collection '`gcc`' in the linux environment from '`Ubuntu 20.04
LTS`'.  When compiled, the executable file replicates a 'shell' or command line
interpreter, which is a user interface used for access to an operating system's
services.  This shell has a set of custom built-in commands, and also integrates
with other commands located in the system's PATH.  Output and functionality from
commands is designed to replicate output from the shell `sh` (dash) and some
bash commands.

### Here is a dummy flowchart
start → input command (read and parse)→ Is it exit? → No? → is it a wildcard character(*.c - all the .c files) → No? → parsing → piping/redirection → no? →executable/shell built-in → yes? → execute command → display output(standard output) → stop

is it exit? → yes? → Terminate → stop

is it a wildcard character(*.c - all the .c files) → yes? → wildcard globbing - Parsing

piping/redirection → yes? → pipe and redirection handler → executable/shell built in

shell built in/ executable → No? → display error(standard error) → input command


## Usage

### compile

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

**Compile with Make**: `make all`

### executing the program

**interactive mode**: `$ ./hsh`

**non-interactive mode**: `$ echo "ls -la" | ./hsh`

### usage of arsine in interactive mode

Here is an example usage of the ls
command with flags.  This command lists directory contents.

```
$ ls -la
```


## Ref
* Ryan Tsihugwa <tsihugwa2018@gmail.com>
* Glory Valery <gloryvalery574@gmail.com>

