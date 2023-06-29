#include "main.h"

/**
 * *_strcat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
