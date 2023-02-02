#include "main.h"
/**
  *_strncat - This function concatenates two strings
  * @dest: The first pointer argument
  *@src: The second pointer argument
  *@n: number of bytes to be printed
  *Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}


