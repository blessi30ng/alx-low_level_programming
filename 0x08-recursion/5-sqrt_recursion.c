#include "main.h"

/**
 * _sqrt_recursion - recurse
 * @n: n
 * Return: n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculate natural square root
 * @n: number to caluclate square root
 * @i: iterate number
 * Return: the actual squareroot
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, 1 + i));
}
