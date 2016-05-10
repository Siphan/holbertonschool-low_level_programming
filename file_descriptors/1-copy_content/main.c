/* Program that prints the content of a file on the standard output */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 32

int main(void)
{
  int fd; /* Stores our file descriptor in an integer */
  char buffer[BUFF_SIZE + 1];
  int len;

  fd = open("Holberton", O_RDWR | O_CREAT); /* Open a file called Holberton. If file doesn't exist, creates it */

  if (fd == -1) /* If our function open fails, return error */
  {
    perror("open");
    return(1);
  }

  len = read(fd, buffer, BUFF_SIZE); /* Stores the read function in a variable len */
    if(len == -1) /* If our function read fails, return error */
    {
      perror ("read");
      close(fd);
      return(1);
    }

buffer[len] = '\0';
printf("Read: %s", buffer); /* Displays the content of the file read to the standard output */
close(fd); /* Always be closing */
return(0);
}
