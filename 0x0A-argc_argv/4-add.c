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
	int l = 0;
	int k;
	int nr;
	int summ;

	while (l < argc)
	{
		nr = atoi(argv[l]);

		k = 0;
		while (argv[l][k] != '\0')
		{
			if (argv[l][k] < '0' || argv[l][k] > '9')
			{
				printf("Error\n");
				return (1);
			}
			summ = summ + nr;
			k++;
		}
		l++;
	}
	printf("%d\n", summ);

	return (0);
}
