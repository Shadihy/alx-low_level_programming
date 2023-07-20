#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	const char *str;
	va_list args;

	va_start(args, n);
	for (s = 0; s < n; s++)
	{
		str = va_arg(args, const char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}
		if (s < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
