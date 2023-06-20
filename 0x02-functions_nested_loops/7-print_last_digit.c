#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - taking the modulus of a given number by 10
 * @n: Description of parameter x
 *
 * Description: to find the last of a given number is the "%" operator.
 * section header: Section description)*
 * Return: Description of the returned value
 */
int print_last_digit(int n)
{

	if (n < 0)
	{
		n = (n % 10) * -1;
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
