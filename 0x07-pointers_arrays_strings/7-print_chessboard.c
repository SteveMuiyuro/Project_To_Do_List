#include "main.h"
/**
  *print_chessboard - is a function that prints a chessboard
  *@a: is the address of the array
  */
void print_chessboard(char (*a)[8])
{

	int i = 0;
	int j = 0;

	while (j < 8)
	{
		i = 0;
		while (i < 8)
		{
			_putchar(a[j][i++]);
		}
		_putchar('\n');
		j++;
	}

}
