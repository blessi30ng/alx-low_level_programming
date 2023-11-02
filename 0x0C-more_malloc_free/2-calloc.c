#include "main.h"

/**
 * _calloc - allocates memory for an array using calloc
 * @nmemb: no of array members
 * @size: of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
