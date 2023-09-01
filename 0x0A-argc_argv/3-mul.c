#include <stdio.h>

/**
 * main - main funct
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main(int argc; char *argv[])
{
	int num1, num2, mul = 0;

	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
