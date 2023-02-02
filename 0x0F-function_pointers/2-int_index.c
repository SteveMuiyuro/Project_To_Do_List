#include "function_pointers.h"

/**
 * int_index - function that  searches for an integer
 * @array: pointer to the array to the array to search
 * @size: size of the array
 * @cmp: pointer to the function used to compare
 *
 * Return: first index for which cmp doesn't return 0, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n, m;

	if (size > 0 && array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			m = cmp(array[n]);
			if (m)
				break;
		}
		if (n < size)
			return (n);
	}
	return (-1);
}
