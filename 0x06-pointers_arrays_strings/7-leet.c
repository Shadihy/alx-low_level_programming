#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	char *tar = str;
	char *tars = "aAeEoOtTlL";
	char *repl = "4433007711";

	while (*tar != '\0')
	{
		int i = 0;
		int j = 0;

		while (tars[i] != '\0')
		{
			if (*tar == tars[i])
			{
				*tar = repl[i];
				j = 1;
				break;
			}
			i++;
		}

		if (!j)
		{
			tar++;
		}
	}
	return (str);
}
