int first_digit(int n)
{
  long int o;
  o = n;
  
  if (o < 0)
  {
    o = (o * -1);
  }

  while (o > 9)
  {
    o = (o / 10);
  }
  return (o);
}
