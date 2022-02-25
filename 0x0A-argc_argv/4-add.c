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
	int l = 1;
	int k;
	int summ = 0;

	while (l < argc)
	{
		summ = summ + atoi(argv[l]);

		k = 0;
		while (argv[l][k] != '\0')
		{
			if (argv[l][k] < '0' || argv[l][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
			k++;
		}
		l++;
	}
	printf("%d\n", summ);

	return (0);
}
