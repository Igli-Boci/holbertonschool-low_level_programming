#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Int
 */

int main(int argc, char **argv)
{
	int a, b;
	char *oprt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	oprt = argv[2];
	b = atoi(argv[3]);

	if (oprt != '+' && oprt != '-' && oprt != '*' && oprt != '/' && oprt != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oprt == '/' || *oprt == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
