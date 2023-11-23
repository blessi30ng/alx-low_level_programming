#include "main.h"

/**
 * _pow - calucaltes base ^ power
 * @power: power of the exponent
 * @base: base of the exponent
 * Return: n
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int a;

	n = 1;
	for (a = 1; a <= power; a++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints a number in binary
 * @n: number to print
 * Return: vod
 */

void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char f;

	f = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
