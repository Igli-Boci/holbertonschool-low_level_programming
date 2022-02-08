#include "main.h"
/**
 * print_alphabet_x10 - print alphabet lower case 10 times.
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char i;

	while (x < 10)
	{
		i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		x++;
		_putchar('\n');
	}
}
