#include "stdio.h"

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	int t;
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib3 = fib1 + fib2;

	printf("%ld", fib1);
	printf("%ld", fib2);

	for (t = 0; t <= 47; t++)
	{
		fib1 = fib2;
		fib2 = fib3;

		printf("%ld ", fib3);
		if (t != 47)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
