#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcpy(result, s2);

	return (result);
}
