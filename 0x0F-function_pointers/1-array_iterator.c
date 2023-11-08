#include "function_pointers.h"

/**
 * array_iterator - exec funct on each element of array
 * @array: array
 * @size: of array
 * @action: funct to perform on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
