#include "main.h"
/**
 * print_chessboard - Function that prints a chess board
 * @a: Pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int l = 0;
	int k = 0;

	while (l < 8)
	{
		while (k < 8)
		{
			_putchar(a[i][j]);
			k++;
		}
		l++;
		_putchar('\n');
	}
}
