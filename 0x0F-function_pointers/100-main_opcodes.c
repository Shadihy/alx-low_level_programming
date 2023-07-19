#include "function_pointers.h"

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: 0 on succes, 1 on argv != 2, 2 on negative bytes in argv
 */
int main(int argc, char **argv)
{
	int i, j;
	int (*adds)(int, char **) = main;
	unsigned char opscode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		opscode = *(unsigned char *)adds;
		printf("%.2x", opscode);

		if (i == j - 1)
			continue;
		printf(" ");

		adds++;
	}

	printf("\n");

	return (0);
}
