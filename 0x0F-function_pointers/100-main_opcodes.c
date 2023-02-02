#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - function that  print the opcodes of this program
 * @a: pointer  address to the main function
 * @n: number of bytes to print
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - function that prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 *
 * Return: Always O (Success)
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, i);
	return (0);
}
