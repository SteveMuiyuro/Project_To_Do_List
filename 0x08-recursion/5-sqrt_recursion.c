#include "main.h"
/**
  *_sqrt_recursion -  is a fuction that returns the natural
  *square root of a number.
  *@n: is the value being evaluated
  *Return: the square root of n
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (_sqrt_recursion(1, n));
}
