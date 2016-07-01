#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

void print_dl_list(List *list) {
  List *ptr;
  ptr = list;
  while(ptr != NULL) {
    printf("%s ",ptr->str);
    ptr = ptr->next;
  }
  printf("\n");
}
