#include "main.h"
/**
  *_strcmp - This function compares two strings
  *@s1: destination argument
  *@s2: source argument
  *Return: THe difference between the fits characters that are different
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}


