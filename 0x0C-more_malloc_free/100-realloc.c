#include "main.h"
/**
  *_realloc - is a function that reallocates a memory block using
  *malloc and free
  *@ptr: pointer to previously allocated memory
  *@old_size: is the size, in bytes, of the allocated space for ptr
  *@new_size:  is the new size, in bytes of the new memory block
  *Return: a pointer to the newly allocated memory, otherwise NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i, max = new_size;
	char *m = ptr;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		a[i] = m[i];
	free(ptr);
	return (a);
}
