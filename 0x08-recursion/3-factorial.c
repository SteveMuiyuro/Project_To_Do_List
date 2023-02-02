#include "main.h"
/**
  *factorial - is a function that returns the factorial of a given number.
  *@n: is the number being evaluated
  *Return: the factorial of the number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}


