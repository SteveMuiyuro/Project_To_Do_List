#include "main.h"
/**
  *print_to_98 - This function prints all natural numbers from n to 98
  *@n: THis is the value being evaluated
  */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar((n-- % 10) + '0');
		_putchar('\n');

	}

	else
	{
		while (n < 98)
			_putchar((n++ % 10) + '0');
		_putchar('\n');

	}

}
