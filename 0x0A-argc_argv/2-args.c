#include "main.h"
/**
  *main - a program that prints all arguments it receives.
  *@argc: is the count of the number of argument
  *@argv: is the array of arguments
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}

	return (0);
}
