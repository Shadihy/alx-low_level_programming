#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tar = dest;

	while (n > 0 && *src != '\0')
	{
		*tar = *src;
		tar++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*tar = '\0';
		tar++;
		n--;
	}
	return (dest);
}
