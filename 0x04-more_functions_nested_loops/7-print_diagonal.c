#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Description: Can only use _putchar to print
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar('\\');

			if (x == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
