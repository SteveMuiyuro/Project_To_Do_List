#include "main.h"
/**
  *swap_int - is a function that swaps the values of two integers.
  *@a: is the first pointer argument
  *@b: is the second pointer argument
  */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;

}

