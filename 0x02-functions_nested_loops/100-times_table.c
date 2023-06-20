#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */

void print_times_table(int n)
{
	int i, j, x;

	for (i = 0; i <= n && (n < 15 && n >= 0); i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (x > 9)
			{
				if (x > 99)
				{
					_putchar((x / 100) + '0');
				}
				_putchar((x / 10) % 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(n + '0');
			}
			if (j < x)
			{
				_putchar(',');
				if (x / 100 == 0  || x >= 99)
				{
					_putchar(' ');
					if ((i * (j + 1)) / 100 == 0)
					{
						_putchar(' ');
					}
				}
			}
		}
		_putchar('\n');
	}
}
