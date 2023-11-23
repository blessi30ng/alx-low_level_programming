#include "main.h"

/**
 * flip_bits - counts the no of bitsto change to another
 * @m: 2nd no
 * @n: 1st no
 * Return: no. of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, c = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (a = 0; a < 64; a++)
	{
		current = exclusive >> a;
		if (current & 1)
			c++;
	}
	return (c);
}
