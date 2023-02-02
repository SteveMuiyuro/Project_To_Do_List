#include "main.h"
/**
  *print_last_digit - the function that prints last digit
  *@x: is the number being evaluated
  *Return: Last digit of the number
  */
int print_last_digit(int x)
{
	int n;

	n = x % 10;

	if (n < 1)
		n *= -1;

	_putchar(n + '0');

	return (n);
}


