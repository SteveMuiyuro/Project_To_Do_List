#include "main.h"
/**
  *_atoi - is a function that converts a string into an interger
  *@s: is a string pointer argument
  *Return: Always 0
  */
int _atoi(char *s)
{
	short m;
	int i, j, k;

	i = j = k = m = 0;
	j = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			k *= 10;
			k -= (s[i] - '0');
			m = 1;
		}
		else if (m == 1)
			break;
		i++;
	}
	k *= j;
	return (k);
}
