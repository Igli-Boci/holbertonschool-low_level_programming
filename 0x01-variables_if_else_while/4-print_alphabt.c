#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha += 1;
		}
		else
		{
			putchar(alpha);
			alpha += 1;
		}
	}
	putchar('\n');
	return (0);
}
