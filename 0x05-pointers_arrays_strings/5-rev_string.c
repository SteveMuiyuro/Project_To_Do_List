#include "main.h"
/**
  *rev_string - This function reverses a string
  *@s: This is a string pointer argument
  */
void rev_string(char *s)
{
	int i, j, k;
	char x;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;

	j = i - 1;

	for (k = 0; k < i / 2; k++)
	{
		x = s[k];
		s[k] = s[j];
		s[j] = x;
		j -= 1;
	}

}

