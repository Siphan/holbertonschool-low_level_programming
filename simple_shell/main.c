<<<<<<< HEAD
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

/* Prototypes in libshell.h - delete when done */
char *read_line(const int fd);
char **string_split(const char *str, char separator);

int print_char(char c) {
  return (write(1, &c, 1));
}

int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env) {
char *line; /* Points to a malloced array */
char **args; /* Stores array of strings returned by string_split */
pid_t pid;
int status;
char *exec_argv[] = {"/bin/ls", "-l", NULL}; /* Executes ls program with the option -l */

  do { /* Prints promt at least once */
    print_char('>');
    print_char(' ');
    line = read_line(0); /* Reads stdin and stores output which is a malloced array */
    args = string_split(line, ' '); /* Splits string from stdin into arguments to be interpreted */
/*
 * We need to fork to create a child process
 * that will execute non-built-in programs within our program
 * using the execve() function
 */
      if ((pid = fork()) == -1) { /* Handles error from forking */
        perror("fork");
        return (1);
      }
      if (pid == 0) { /* Handles child process */
        execve(exec_argv[0], exec_argv, env);
      }
      else { /* Handles parent process */
        wait(&status);/* Waits for child to terminate before displaying prompt and read_line again */
        free(line);
        free(args);
      }
  } while(0);
return(0);
}
=======
  	/*
	 * This program is a UNIX command interpreter
	 * Created by:
	 * Asaia Palacios & Siphan Bou
	 * Date:
	 * May 11, 2016
	 */
>>>>>>> 778ff5a0742138852cc9f796789f7eb7e8134919
