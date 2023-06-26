#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */
void puts_half(char *str)
{
	int x, i, j;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		for (i = x / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (x % 2)
	{
		for (j = (x - 1) / 2; j < x - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}
