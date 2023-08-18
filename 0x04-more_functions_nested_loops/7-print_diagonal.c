#include "main.h"

/**
 * print_diagonal - prints \
 * @n: function parameter
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		        _putchar('\\');
		_putchar('\n');
		}
	}
}
