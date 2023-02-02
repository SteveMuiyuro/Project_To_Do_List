#include "main.h"
/**
  *_islower - checks the lowercase character
  *
  *@c: is the character being evaluated
  *
  *Return: 1 if character is uppercase, return 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
