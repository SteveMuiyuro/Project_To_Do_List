#include "main.h"
/**
  *str_concat - a function that concatenates two strings.
  *@s1: first array pointer
  *@s2: second array pointer
  *Return: pointer should point to a newly allocated
  *space in memory which contains the contents of s1,
  *followed by the contents of s2, and null terminated
  */
char *str_concat(char *s1, char *s2)
{

	unsigned int i, j, k, l;
	char *a;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	k = i + j + 1;
	a = malloc(k * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		a[l] = s1[l];
	for (l = 0; l < j; l++)
		a[l + i] = s2[l];
	a[i + j] = '\0';
	return (a);
}
