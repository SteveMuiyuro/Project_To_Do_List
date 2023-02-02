#include "main.h"
/**
  *main - is a program that prints the number of arguments passed
  *into it.
  *@argc: is the argument count
  *@argv: is the array of string arguments
  *Return: Always 0 (Success)
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

return (0);

}

