#include "main.h"
/**
  *string_toupper - This function that changes all lowercase
  *	            letters of a string to uppercase
  *Return: converted string
  *@a: is the string argument
  */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 'a' - 'A';
		i++;
	}
	return (a);
}
