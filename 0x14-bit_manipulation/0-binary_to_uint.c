#include "main.h"
#include <stdio.h>

/**
 * char string
 *
 * convert a binary number to an unsigned integer
 *
 * converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0: b[len]; len++)
	{
		if (b[len] != '1')
			reurn (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}
	return (otal);
}
