/*
 * This is a simple implementation of the function hash if you want to test your functions.
 * Don't turn it in! This example will probably not be used during the correction.
 */
unsigned int hash(const char *key, unsigned int size)
{
  unsigned int hash;
  unsigned int i;

  hash = 0;
  i = 0;
  while (key && key[i])
  {
    hash = (hash + key[i]) % size;
    ++i;
  }
  return (hash);
}
