#include "main.h"
/**
  *argstostr -  a function that concatenates all the
  *arguments of your program.
  *@ac: # of arguments
  *@av: pointer to argument pointer
  *Return: Returns a pointer to a new string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
		int i, j, k = 0, l = 0;
	char *a;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		l++;
	}
	l++;
	a = malloc(l * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			a[k] = av[i][j];
			k++;
		}
		a[k] = '\n';
		k++;
	}
	a[k] = '\0';
	return (a);
}
