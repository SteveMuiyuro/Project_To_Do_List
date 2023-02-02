#include "function_pointers.h"

/**
 * array_iterator - the function executes a func given as a param on
 * each element of array
 * @array: pointer argument of the array to execute func on
 * @size: argument to the size of array
 * @action: pointer to the executable function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array && action)
	{
		for (n = 0; n < size; n++)
		{
			action(array[n]);
		}
	}
}
