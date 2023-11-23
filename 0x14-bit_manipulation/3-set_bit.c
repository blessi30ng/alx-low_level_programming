#include "main.h"

/**
 * set_bit - sets value of bit at agiven index to 1
 * @n: number to set
 * @index: at which bit is set
 * Return: 1 if succes , -1 failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long s;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	s = 1 << index;
	*n = *n | s;
	return (1);
}
