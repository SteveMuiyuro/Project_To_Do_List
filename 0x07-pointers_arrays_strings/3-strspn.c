#include "main.h"
/**
  *_strspn - The function that gets the length of a prefix substring.
  *@s: first pointer to a string
  *@accept: second pointer to a string
  *Return:  the number of bytes in the initial
  *segment of s which consist only of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{

	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	count = 0;


	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				count++;
			}

			j++;
		}

		j = 0;
		i++;

		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
}
