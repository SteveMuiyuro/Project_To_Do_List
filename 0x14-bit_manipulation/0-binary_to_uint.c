/*
 * Auth: Steve Mwangi
 * File: 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - This function converts a binary
 * 		    number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *         Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0, mult = 1;
	int a;

	if (b == '\0')
		return (0);

	for (a = 0; b[a];)
		a++;

	for (a -= 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		num += (b[a] - '0') * mult;
		mult *= 2;
	}

	return (num);

}
