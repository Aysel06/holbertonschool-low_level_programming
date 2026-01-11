#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculator program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits with error codes 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
