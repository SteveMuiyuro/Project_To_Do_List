#include "main.h"
/**
  *create_array - creates an array of chars,
  *and initializes it with a specific char.
  *@size: is the size of array to ne created
  *@c:char to initialize array with
  *Return:NULL if size = 0 or a pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b;

	if (size == 0)
		return (NULL);
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
