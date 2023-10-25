#include "main.h"
#include <stdio.h>

/**
 * factorial - finds the factorial of anumber
 * @n: no to find the factorial
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
