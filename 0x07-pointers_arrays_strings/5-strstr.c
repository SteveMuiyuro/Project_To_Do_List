#include "main.h"
/**
  *_strstr - the function locates a substring
  *@haystack: the first string pointer argument
  *@needle: the second string pointer argument
  *Return:  pointer to the beginning of the located substring,
  *or NULL if the substring is not found.
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0';)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
	if (needle[j] == '\0')
	{
		return (&haystack[i]);
	}
	i++;
	}
	return ('\0');
}
