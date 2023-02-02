#include "main.h"
/**
  *print_array - This function that prints n elements
  *		of an array of integers, followed by a new line.
  *@a: is the first pointer argument
  *@n: is the second pointer argument
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
		printf(",");
		printf(" ");
		}
	}
	printf("\n");
}

