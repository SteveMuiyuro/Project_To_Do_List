#include "main.h"
/**
  *set_string - This function sets the value of a pointer to a char.
  *@s: pointer to a pointer string argument
  *@to: pointer to a string argument
  */
void set_string(char **s, char *to)
{
	*s = to;
}
