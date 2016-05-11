/* Program that prints the permissions of a file
   The name of the file is given as a program argument
   If the file given as parameter is a symbolic link,
   the program prints the permissions relatives to the link
   and not to the file the link refers to.
   If the number of arguments is not good,
   or if a problem happens with any system function call,
   the program returns 1
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int print_char(char);

int main(int argc, char **argv)
{
  struct stat fileStat; /* Declare a stat structure, which contains information about the file */

if (argc != 2) /* If the number of arguments is not good, return error */
  {
    return (1);
  }
 else
 {
   if (lstat(argv[1], &fileStat) == -1) /* If lstat system function call fails, return 1*/
     {
       return (1);
     }
   else
     {
       /* st_mode is the field which contains the file type code, and the access permission bits */
       print_char( (S_ISLNK(fileStat.st_mode)) ? 'l' :(S_ISDIR(fileStat.st_mode)) ? 'd' : '-'); /* Check if file is a symbolic link, else check if it's a directory */
       print_char( (fileStat.st_mode & S_IRUSR) ? 'r' : '-'); /* Does owner has read permission? */
       print_char( (fileStat.st_mode & S_IWUSR) ? 'w' : '-'); /* Does owner has write permission? */
       print_char( (fileStat.st_mode & S_IXUSR) ? 'x' : '-'); /* Does owner has execute permission? */
       print_char( (fileStat.st_mode & S_IRGRP) ? 'r' : '-'); /* Does group has read permission? */
       print_char( (fileStat.st_mode & S_IWGRP) ? 'w' : '-'); /* Does group has write permission? */
       print_char( (fileStat.st_mode & S_IXGRP) ? 'x' : '-'); /* Does group has execute permission? */
       print_char( (fileStat.st_mode & S_IROTH) ? 'r' : '-'); /* Do others have read permission? */
       print_char( (fileStat.st_mode & S_IWOTH) ? 'w' : '-'); /* Do others have write permission? */
       print_char( (fileStat.st_mode & S_IXOTH) ? 'x' : '-'); /* Do others have execute permission? */
       print_char( '\n');
     }
 }
 return (0);
}
