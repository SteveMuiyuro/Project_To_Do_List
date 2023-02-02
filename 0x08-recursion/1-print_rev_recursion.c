#include "main.h"
/**
  *_print_rev_recursion - is a function that prints a string in reverse
  *@s: is the string pointer argument
  */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
