#include "main.h"
/**
  *is_prime_number - This function that returns 1
  *if the input integer is a prime number,
  *otherwise return 0.
  *@n: the value to be evaluated
  *Return: 1 if the input integer is a prime number, otherwise return 0
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_is_prime_check(2, n));
}


