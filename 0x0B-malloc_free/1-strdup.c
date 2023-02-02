#include "main.h"
/**
  *_strdup - a function that returns a pointer
  *to a newly allocated space in memory, which
  *contains a copy of the string given as a parameter.
  *@str: pointer to a string
  *Return: a pointer to a new string which is a duplicate of
  *the string str.
  */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	i++;
	a = malloc(i * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
	a[j] = str[j];
	}
	return (a);
}
