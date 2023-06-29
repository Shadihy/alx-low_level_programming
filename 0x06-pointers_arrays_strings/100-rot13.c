#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *tar = str;

	while (*tar != '\0')
	{
		if ((*tar >= 'A' && *tar <= 'M') ||
				(*tar >= 'a' && *tar <= 'm'))
		{
			*tar += 13;
		}
		else if ((*tar >= 'N' && *tar <= 'Z') ||
				(*tar >= 'n' && *tar <= 'z'))
		{
			*tar -= 13;
		}
		tar++;
	}

	return (str);
}
