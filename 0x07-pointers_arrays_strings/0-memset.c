#include "main.h"

/**
 * _memset - fills memmory with a constant byte
 * @s: area to fill the byte
 * @b: consant byte
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
