#include "main.h"
/**
  *main - is a program that adds positive numbers.
  *@argc: argument count
  *@argv: array of arguments
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);

	return (0);
}
