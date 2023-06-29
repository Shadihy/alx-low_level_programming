#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase.
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	char *tar = str;

	while (*tar != '\0')
	{
		if (*tar >= 'a' && *tar <= 'z')
		{
			*tar = *tar - 'a' + 'A';
		}
		tar++;
	}
	return (str);
}
