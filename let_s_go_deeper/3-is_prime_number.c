/* This is a function that checks to see if a number n is a prime number */

int test_is_prime_number(int n,int i)
{
  int res; /* Result of n divided by i */
  res = 0;

  if (n >= 2 /* Starting with n = 2 as we know 1 is a prime number */)
    {
      if (i == 1) 
	{
	  res = 1;
	}
      else if (n % i != 0) /* If remainder of n divided by 1 is not 0, function calls itself */
	{
	  res = test_is_prime_number(n, i - 1);
	}
    }

  return res;
}

/* This is a function that returns 1 if a number is a prime number, 0 otherwise. */

int is_prime_number(int n)
{
  return test_is_prime_number(n, n/2);
}
