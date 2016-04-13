/*
 * A  function that returns a pointer to
 * a newly created 2 dimensional integers grid
 */

#include <stdlib.h>
int **alloc_grid(int width, int height) {
/* Allocate array -first array of rows, then each row */ 
  int **arrays = malloc(sizeof(int *) * height);
  int i = 0;
  if (arrays == NULL) return NULL;
  for ( ; i<width ; i++) {
    arrays[i] = malloc(sizeof(int) * width);
    if (arrays[i] == NULL) return NULL;
  }
  return arrays;
}
