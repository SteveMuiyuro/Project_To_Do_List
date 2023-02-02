#include "main.h"
#include <stddef.h>

/**
  *_strchr - The function locates a character in a string
  *@s: is a string pointr argument
  *@c: is a character
  *Return: a pointer to the first occurrence of the
  *character c in the string s, or NULL if the character
  *is not found
 */
char *_strchr(char *s, char c)
{


	int k = 0;

	while (*(s + k))
	{
		if (*(s + k) == c)
			return (s + k);
		k++;
	}
	if (*(s + k) == c)
		return (s + k);
	return (NULL);

}
