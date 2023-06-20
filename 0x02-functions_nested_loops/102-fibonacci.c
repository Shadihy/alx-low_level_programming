#include "stdio.h"

/**
 * main - check the code.
 * Description
 * Return: Always 0.
 */
int main(void)
{
	int count = 50;
	long long int fib1 = 1;
	long long int fib2 = 2;

	printf("%lld, %lld", fib1, fib2);

	for (int i = 3; i <= count; i++)
	{
		long long int fib3 = fib1 + fib2;

		printf("%lld ", fib3);

		fib1 = fib2;
		fib2 = fib3;
	}
	printf("\n");
	return (0);
}
