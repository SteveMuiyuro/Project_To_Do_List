#include "main.h"
/**
  *print_rev - is a function that prints in reverse followed by a newline
  *@s: is a string pointer argument
  */
void print_rev(char *s)
{
	int i, j;

	j = strlen(s);

	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');

}



