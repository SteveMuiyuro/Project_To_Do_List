#include <stdio.h>
/**
  *print_diagsums - the function prints the sum of
  *the two diagonals of a square matrix of integers.
  *@a: is the first intrger pointer argument
  *@size: is the second interger argument
  */
void print_diagsums(int *a, int size)
{
	int i;
	int count1;
	int count2;
	int d1;
	int d2;
	int x;

	i = 0, count1 = 0, count2 = 0, d1 = 0, d2 = 0, x = 0;
	while (i < size * size)
	{
		if (i == d1 + (x * size))
			count1 += a[i];
		if (i == (size - d2 - 1) + (x * size))
			count2 += a[i];
		if (((i + 1) % size) == 0)
			x++, d1++, d2++;
		i++;
	}
	printf("%d, ", count1);
	printf("%d\n", count2);
}
