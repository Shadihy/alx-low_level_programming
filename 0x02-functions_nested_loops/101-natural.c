#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1024; i >= 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
