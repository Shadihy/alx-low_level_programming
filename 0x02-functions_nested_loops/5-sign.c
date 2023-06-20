#include "main.h"

/**
  *print_sign - print any character, symbol or number
  *@n: Description of parameter x
  *
  * Description: print any character, symbol or number
  * section header: Section description)*
  * Return: Description of the returned value
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

