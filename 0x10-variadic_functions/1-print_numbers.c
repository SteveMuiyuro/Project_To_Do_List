#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line.
 * @separator: separator to print in between numbers
 * @n: number of values to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int a;
	va_list vlist;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		a = va_arg(vlist, int);
		printf("%d", a);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}
