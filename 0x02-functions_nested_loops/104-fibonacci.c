#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int count = 98;
	long int fib1 = 1, fib2 = 2;

	printf("%ld %ld ", fib1, fib2);

	for (int i = 3; i <= count; i++)
	{
		long int fib3 = fib1 + fib2;

		printf("%ld ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}

	printf("\n");
	return (0);
}
