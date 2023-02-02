#include "main.h"
/**
  *reverse_array - is a function that reverses the content of an array of
  *		   intergers
  *@a: is the pointer to the array
  *@n: is the second int variable
  */
void reverse_array(int *a, int n)
{

	int i = 0;
	int j = 0;

	n -= 1;

	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
