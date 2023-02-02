#include "main.h"
/**
  *_strpbrk - the function searches a string for any of a set of bytes.
  *@s: first string pointer argument
  *@accept: second string pointer argument
  *Return: a pointer to the byte in s that matches
  *one of the bytes in accept, or NULL if no such byte is found.
  */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *s)
				return (s);
			j++;
		}
		s++;
	}
	return (0);
}
