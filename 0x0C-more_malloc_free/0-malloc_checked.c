#include "main.h"

/**
 * malloc_checked - allocated memory uing malloc
 * @b: size of omemory
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
