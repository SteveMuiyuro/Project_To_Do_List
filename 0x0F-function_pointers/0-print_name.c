#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: argument for name to print
 * @f: function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
