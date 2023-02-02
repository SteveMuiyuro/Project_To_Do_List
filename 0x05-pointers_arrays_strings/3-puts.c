#include "main.h"
/**
  *_puts - This function prints a string followed by a newline
  *@str: This is a string pointer argument
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');

}

