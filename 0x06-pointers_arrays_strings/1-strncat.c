#include "main.h"

/**
 * _strncat - Concatenates two strings using at most
 *            an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tar = dest;

	while (*tar != '\0')
	{
		tar++;
	}

	while (n > 0 && *src != '\0')
	{
		*tar = *src;
		tar++;
		src++;
		n--;
	}
	*tar = '\0';
	return (dest);
}
