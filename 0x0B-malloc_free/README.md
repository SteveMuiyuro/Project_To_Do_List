char *create_array(unsigned int size, char c) is a function that creates an array of chars, and initializes it with a specific char.
char *_strdup(char *str) is a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
char *str_concat(char *s1, char *s2) is a function that concatenates two strings.
int **alloc_grid(int width, int height) is a function that returns a pointer to a 2 dimensional array of integers.
void free_grid(int **grid, int height) is a function that frees a 2 dimensional grid previously created by your alloc_grid function.
char *argstostr(int ac, char **av) is a function that concatenates all the arguments of the program.
char **strtow(char *str) is a function that splits a string into words.
