#include "main.h"

/**
  *_strncpy - This function copies a string
  *@dest: argument to the destination string
  *@src: argument to the source string
  *@n: Number of bytes to be copied
  *Return: pointer to the destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i]	= src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
