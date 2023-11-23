#include "main.h"

/**
 * clear_bit - sets valueto 0 of a bit at a given index
 * @index: index
 * @n: parameter
 * Return: 1 success or -1 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
