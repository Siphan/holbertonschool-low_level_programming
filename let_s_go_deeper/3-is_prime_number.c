int test_is_prime_number(int n, int i);

/* This function returns 1 if a number is a prime number, 0 otherwise */
int is_prime_number(int n){
  if( n < 2 ){
    return 0;
  }
  else{
    return test_is_prime_number(n, 2);
  }
}

/* This function tests if n is a multiple of i */
int test_is_prime_number(int n, int i){
  if ( i < n){
    if ( n%i == 0 ){
      return 0 ;
    }
    else{
      return test_is_prime_number(n, i+1);
    }
  }
  else {
    return 1 ;
  }
}
