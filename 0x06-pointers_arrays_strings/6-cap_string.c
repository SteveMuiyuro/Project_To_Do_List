#include "main.h"
/**
  *cap_string - This function that capitalizes all words of a string.
  *@a: is a pointer argument
  *Return: pointer to string capitalized
  */
char *cap_string(char *a)
{
	int i, j;
	char x[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] -= ('a' - 'A');
	while (a[i] != '\0')
	{
		for (j = 0; x[j] != '\0'; j++)
			if (a[i - 1] == x[j] && (a[i] >= 'a' && a[i] <= 'z'))
				a[i] -= ('a' - 'A');
		i++;
	}
	return (a);
}
