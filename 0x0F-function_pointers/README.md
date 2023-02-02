void print_name(char *name, void (*f)(char *)) is a function that prints a name
void array_iterator(int *array, size_t size, void (*action)(int)) is a function that executes a function given as a parameter on each element of an array.
int int_index(int *array, int size, int (*cmp)(int)) is a function that searches for an integer.
3-calc.h: This file contain all the function prototypes and data structures used by the program.
3-op_functions.c:Contains atleast five different functions
3-get_op_func.c: contains the function that selects the correct function to perform the operation asked by the user
3-main.c: contains the main function
100-main_opcodes.c is a program file that prints the opcodes of its own main function
