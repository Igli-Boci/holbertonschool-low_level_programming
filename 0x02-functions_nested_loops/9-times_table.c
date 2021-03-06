#include "main.h"
/**
 * times_table - print the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int mult = i * j;

			if (mult >= 10)
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			else
			{
				_putchar(mult + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
