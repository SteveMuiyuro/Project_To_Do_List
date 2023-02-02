#include "main.h"
/**
  *array_range - is a function that creates an array of integers.
  *@min: first interger argument
  *@max: second interger argument
  *Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int i, m;
	int *n;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	n = malloc(sizeof(int) * m);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < m; i++, min++)
	{
		n[i] = min;
	}
	return (n);
}
