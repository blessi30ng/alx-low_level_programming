#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of string
 * @s: string to find its length
 * Return: length of sring
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
