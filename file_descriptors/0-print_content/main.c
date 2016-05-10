/* Program that prints the content of a file passed as parameter to standard input on the standard output */
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
  int fd; /* Stores our file descriptor in an integer */
  char buffer;

  fd = open(argv[1], O_RDONLY); /* Open a file passed as parameter to stdin with read only access mode */

  if (argc != 2) /* If the number of arguments is not good, return error */
  {
    return(1);
  }

  else if (fd == -1) /* If our function open fails, return error */
  {
    return(1);
  }

while (read(fd, &buffer, 1))
  {
    write(1, &buffer, 1); /* Writes content from the buffer to stdout */
  }

close(fd); /* Always be closing */
return(0);
}
