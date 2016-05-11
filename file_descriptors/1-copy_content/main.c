/* Program that copies the content of a file into another file
   The name of the file to copy will be given as the first program argument.
   The name of the destination file will be given as the second program argument
   If the destination file does not exist, it is created with the following permissions:
   read/write permissions for the user
   read permission for the group
   read permission for others
   If the destination file already exists, its content is erased before the program writes in it.
   If the number of arguments is not good, or if a problem happens with any system function call,
   the program returns 1.
 */
 #include <stdio.h>
 #include <fcntl.h>
 #include <errno.h>
 #include <sys/types.h>
 #include <unistd.h>

 #define BUF_SIZE 8192

 int main(int argc, char** argv) {

     int input_fd, output_fd;    /* Input and output file descriptors */
     ssize_t ret_in, ret_out;    /* Number of bytes returned by read() and write() */
     char buffer[BUF_SIZE];      /* Character buffer */

     /* If src and dest file name arguments missing */
     if(argc != 3){
         return (1);
     }

     /* Create input file descriptor.
        Open a file passed as parameter to stdin with read only access mode.
      */
     input_fd = open (argv [1], O_RDONLY);
     if (input_fd == -1) {
             perror ("open");
             return (1);
     }

     /* Create output file descriptor.
        If the destination file does not exist, create it.
      */
     output_fd = open(argv[2], O_RDWR | O_CREAT, 0644);
     if(output_fd == -1){
         perror("open");
         return (1);
     }

     /* Copy process */
     while((ret_in = read (input_fd, &buffer, BUF_SIZE)) > 0){
             ret_out = write (output_fd, &buffer, (ssize_t) ret_in);
             if(ret_out != ret_in){
                 /* Write error */
                 perror("write");
                 return (1);
             }
     }

     /* Close file descriptors */
     close (input_fd);
     close (output_fd);

     return (0);
 }
