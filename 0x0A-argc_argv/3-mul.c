#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument
 * @argv: Argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int l;
	int k;
	int mult;

	l = atoi(argv[1]);
	k = atoi(argv[2]);
	mult = l * k;
	printf("%d\n", mult);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
