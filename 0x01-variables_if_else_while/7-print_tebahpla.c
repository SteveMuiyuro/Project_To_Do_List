#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}

