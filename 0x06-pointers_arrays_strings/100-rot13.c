#include "main.h"
/**
  *rot13 - this function encodes a string using rot13.
  *@c: pointer argument to input string
  *Return: pointer to the encoded string
  */
char *rot13(char *c)
{
	int i, j;
	char a[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b;

	for (i = 0; c[i] != '\0'; i++)
	{
		b = 0;
		for (j = 0; arr1[j] != '\0' && b == 0; j++)
		{
			if (c[i] == arr1[j])
			{
				c[i] = a[j];
				b = 1;
			}
		}
	}
	return (c);
}

