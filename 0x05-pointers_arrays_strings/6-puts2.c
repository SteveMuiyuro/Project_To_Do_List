#include "main.h"
/**
  *puts2 - this function prints every other
  *	   character of a string, starting
  *	   with the first character, followed by a new line.
  *@str: THis is a string pointer argument
  */
void puts2(char *str)
{
	int i, j;

	j = strlen(str);

	for (i = 0; i <= j - 1; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
