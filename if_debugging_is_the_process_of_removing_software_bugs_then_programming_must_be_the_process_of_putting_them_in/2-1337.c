/* This function encodes a string into 1337 */
char *leet(char *c) {
  int i;

  for (i = 0; c[i]; i++) { /* For loop using array c[i] */
    
    if (c[i] == 'a' || c[i] == 'A') { /* Encodes 'a' and 'A' into '4' */
      c[i] = '4';
    }
     
    else if (c[i] == 'e' || c[i] == 'E') { /* Encodes 'e' and 'E' into '3' */
      c[i] = '3';
    }

    else if (c[i] == 'o' || c[i] == 'O') { /* Encodes 'o' and 'O' into '0' */
      c[i] = '0';
    }

    else if (c[i] == 't' || c[i] == 'T') { /* Encodes 't' and 'T' into '7' */
      c[i] = '7';
    } 

    else if (c[i] == 'l' || c[i] == 'L') { /* Encodes 'l' and 'L' into '1' */
      c[i] = '1'; 
    }
  }
  return (c);
}
  

