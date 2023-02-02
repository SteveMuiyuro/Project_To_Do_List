#include "main.h"
/**
  *print_number - this function prints an interger
  *@n: this is the interger argument
  */
void print_number(int n)
{
	int x, y, z;

	z = 1;

	if (n >= 0)
		x = n * -1;
	else
	{
		x = n;
		_putchar('-');
	}


	y = x;
	while (y <= -10)
	{
		z *= 10;
		y /= 10;
	}

	while (z >= 1)
	{
		_putchar(((x / z) % 10) * -1 + '0');
		z /= 10;
	}
}
