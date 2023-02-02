#include "main.h"
/**
  *puts_half - This function prints half of a string, followed by a new line.
  *@str: This is a string pointer argument
  */
void puts_half(char *str)
{
	int i;
	int j;
	int k;

	j = strlen(str);

	if (j % 2 == 1)
		k = j / 2 + 1;
	else
		k = j / 2;
	for (i = k; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}



