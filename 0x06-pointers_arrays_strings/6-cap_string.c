#include "main.h"
#include <ctype.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int nxt = 1;
	char *tar = str;

	while (*tar != '\0')
	{
		if (nxt && islower(*tar))
		{
			*tar = toupper(*tar);
		}
		nxt = 0;

		if (*tar == ' ' ||
			*tar == '\t' ||
			*tar == '\n' ||
			*tar == ',' ||
			*tar == ';' ||
			*tar == '.' ||
			*tar == '!' ||
			*tar == '?' ||
			*tar == '"' ||
			*tar == '(' ||
			*tar == ')' ||
			*tar == '{' ||
			*tar == '}')
		{
			nxt = 1;
		}
		tar++;
	}
	return (str);
}
