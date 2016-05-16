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
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my_functions.h"

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env) /* char **env inherits all the environment variables when it gets executed */
{
char *input; /* Points to a malloced array */
char **args; /* Stores array of strings returned by string_split */
pid_t pid;
int status;
int i;
int j;
char *print_env;
char *path;

do { /* Prints promt at least once */
  write(1, "C-shell> ", 9);
  input = read_line(0); /* Reads stdin and stores output which is a malloced array */
  args = string_split(input, ' '); /* Splits string from stdin into arguments to be interpreted */

  if(strings_compare(input, "env") == 0) { /* If input command is "env", prints the env without creating a child process */
    for(i = 0; env[i] != '\0'; i++) { /* Loops through each array of strings stored in env ie all environment variables */
    print_env = env[i];
    print_char('\n');
      for(j = 0; print_env[j] != '\0'; j++) { /* Loops through each string ie each environment variable */
        print_char(print_env[j]);
      }
    }
    print_char('\n');
  }
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
        path = get_path(env, args[0]); /* Stores path to executable returned by get_path */
        execve(path, args, env); /* Executes the program that was typed as input with all its arguments */
      }
      else { /* Handles parent process */
        wait(&status);/* Waits for child to terminate before displaying prompt and read_line again */
        free(input);
        free(args);
      }
  } while(status); /* Whenever a built-in program or child process is executed, prompt is printed again */
return(0);
}
