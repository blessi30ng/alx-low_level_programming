#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: pointers
 * Return: index of all matched characters
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
