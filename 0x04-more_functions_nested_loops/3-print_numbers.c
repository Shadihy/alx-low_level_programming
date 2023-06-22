#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints the numbers, from 0 to 9, followed by a new line.
 * Return:
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}

	_putchar('\n');
}
