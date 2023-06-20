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
		int sum = a + b;
		a = b;
		b = sum;
		if (a % 2 == 0)
		{
			sum += a;
		}
	}
	printf("%d", sum);
	return (0);
}
