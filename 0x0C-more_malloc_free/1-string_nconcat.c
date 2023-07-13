#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con;
	unsigned int x = n, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (y = 0; s1[y]; y++)
		x++;
	con = malloc(sizeof(char) * (x + 1));

	if (con == NULL)
		return (NULL);

	x = 0;
	for (y = 0; s1[y]; y++)
		con[x++] = s1[y];
	for (y = 0; s2[y] && y < n; y++)
		con[x++] = s2[y];

	con[x] = '\0';
	return (con);
}
