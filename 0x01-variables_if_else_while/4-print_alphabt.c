#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
		putchar(lower);
	lower++;

	}
	putchar('\n');
	return (0);
}
