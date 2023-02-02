#include "main.h"
/**
  *main - a program that multiplies two numbers
  *@argc: arguments count
  *@argv: array of argument
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int i, j, k;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	k = i * j;
	printf("%d\n", k);

	return (0);
}


