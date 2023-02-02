#include "main.h"
#include <string.h>

/**
  **_strcat - is a function that function appends the src
  *	      string to the dest string, overwriting the terminating
  *	      null byte (\0) at the end of dest, and then adds a
  *	      terminating null byte
  *@dest: The first pointer argument
  *@src: The second pointer argument
  *Return: a pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
