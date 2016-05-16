#include "my_functions.h"
#include "libshell.h"
#include <stddef.h>

char *get_path(char **env , char *cmd)
{
  char **paths;
  char *path;
  int i;
  char *concat_path;
  for (i = 0; env[i]!= '\0'; i++) /* loop for each PATH */
  {
    if(str_ncomp(env[i], "PATH=", str_len("PATH=")) == 0)
      {
        paths = string_split(env[i],'=');
        path = paths[1];
        paths = string_split(path, ':');
        break; /* Get the path */
      }
  }
  for(i = 0; paths[i] != '\0'; i++)
   {
     concat_path = concat_strings(paths[i],"/");
     path = concat_strings(concat_path, cmd);
     if(find_ex(path)) /* If path to program to be executed is found */
        return path;
     path = '\0';
   }
   return NULL; /* If no path found */
}
