/* Defines the function called in main 
   Takes int n as paramater, n is defined in main
   Returns int o to main which will print o
*/
int first_digit(int n) 
{
  /* Needs long integer data type for the last number INT_MIN
     to print as it's too long for Vagrant */
  long int o; 
  o = n; /* Reassigning o to n ie int n is now o which is a long int data type */
  
  if (o < 0) /* If int o to be returned to main is negative, makes it positive  */
  {
    o = (o * -1);
  }

  /* While loop prevents from creating new variable 
     ie uses existing variable
  */
  while (o > 9) /* If number o has more than one digit, divide it by 10 */
  {
    o = (o / 10);
  }
  return (o); /* When o only has one digit, o is returned to main */
}
