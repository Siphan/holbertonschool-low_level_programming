#include <stdlib.h>
char *create_space_for_word(char *str, char *dest, char separator);
char *copy_word(char *str, char *dest, char separator);
char *jump_separator(char *str, char separator);
char **word_count_reserve_space(char *str, char separator);

/*splits a string into words with space as separator*/
char **string_split(const char *str, char separator){
  int i=0;
  char *copy=(char *)str;
  char **split=word_count_reserve_space(copy, separator);
  /*while str is not equal to \0*/
  while(*copy){
    if (*copy==separator){
      copy=jump_separator(copy, separator);
      /*jumps over all consecutive spaces and returns pointer to non-space character*/
    }
    else{
      split[i]=create_space_for_word(copy,split[i], separator);
      /*returns address of newly allocated space for word*/
      copy=copy_word(copy,split[i], separator);
      /*copies word into the newly allocated space and returns a pointer to the location where word ends*/
      i++;
      /*so that next split[i] is accessible*/
    }
  }
  return split;
}

/*counts the number of letters in a word and allocates space for it*/
char *create_space_for_word(char *str, char *dest, char separator){
  int count;
  for(count=0;*str!=separator && *str;str++){
    /*count number of letters in the word*/
    count++;
  }
  dest=malloc( sizeof(char)*(count+1) );
  return dest;
}

/*copies word to *dest and null terminates it*/
char *copy_word(char *str, char *dest, char separator){
  for(;*str!=separator && *str;str++){
    /*not equal to space or \0*/
    *dest=*str;
    dest++;
  }
  *dest='\0';
  return str;
}

/*jumps over all consecutive spaces*/
char *jump_separator(char *str, char separator){
  /*keeps iterating until space is encountered*/
  for(;*str==separator;str++);
  return str;
}

/*counts total number of words in the string and reserves space for them*/
char **word_count_reserve_space(char *str, char separator){
  char **dest;
  int count=0;
  if (*str!=separator) count++; /*if first character is neither space or '/0' then add 1 to counter*/
  for(;*str;str++){
    if (*str==separator){
      str=jump_separator(str, separator);
      if (*str!='\0') count++; /*at every block of space encounted count++*/
      /*
       *if a string is "     how    are     you" then there are 3 blocks of spaces
       *if a string is "how    are     you" then there are 2 blocks of spaces but note on line 3 of this
       *function we have already accounted that if initially first character is non-space or
       *non-terminating add 1 to counter
       *so again the count is 3
       */
    }
  }
  dest=malloc( sizeof(char *)*(count+1) );
  dest[count]=NULL; /*set the last one to NULL*/
  return dest;
}
