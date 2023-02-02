#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{	putchar(lower);

	}

	upper = 'A';
	while (upper <= 'Z')
	{	putchar(upper);
		upper++;
	}

	putchar('\n');
	return (0);
}
