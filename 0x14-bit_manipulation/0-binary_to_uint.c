#include "main.h"

/**
 * binary_to_uint - converts a binaty number to an unsigned int
 * @b: pointer to a string containing a binry number
 * Return: decimal value of binary no
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int n;

	n = 0;
	if (!b)
		return (0);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '\0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		n <<= 1;
		if (b[c] == '1')
			n += 1;
	}
	return (n);
}
