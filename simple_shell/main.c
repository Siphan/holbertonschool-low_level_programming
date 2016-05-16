/*
 * This program is a UNIX command line interpreter
 * Created by:
 * Asaia Palacios & Siphan Bou
 * Date:
 * May 11, 2016
 */

#include <unistd.h>
#include "libshell.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

int print_char(char c) {
  return (write(1, &c, 1));
}

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env) /* char **env inherits all the environment variables when it gets executed */
{
char *input; /* Points to a malloced array */
char **args; /* Stores array of strings returned by string_split */
pid_t pid;
int status;

  do { /* Prints promt at least once */
    print_char('>');
    print_char(' ');
    input = read_line(0); /* Reads stdin and stores output which is a malloced array */
    args = string_split(input, ' '); /* Splits string from stdin into arguments to be interpreted */
/*
 * We need to fork to create a child process
 * that will execute non-built-in programs within our program
 * using the execve() function which executes a process
 * in an environment which it assigns
 */
      if ((pid = fork()) == -1) { /* Handles error from forking */
        perror("fork");
        return (1);
      }
      if (pid == 0) { /* Handles child process */
        execve(args[0], args, env); /* Executes the program that was typed as input with all its arguments */
      }
      else { /* Handles parent process */
        wait(&status);/* Waits for child to terminate before displaying prompt and read_line again */
        free(input);
        free(args);
      }
  } while(status);
return(0);
}
