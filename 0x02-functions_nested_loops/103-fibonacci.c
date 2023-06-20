#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0, b = 1;
	int sum = 0;

	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		int sum = a + b;

		a = b;
		b = sum;
	}
	printf("%d", sum);
	return (0);
}
