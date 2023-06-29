#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *t = s;

	while (*t != '\0')
	{
		if ((*t >= 'A' && *t <= 'M') ||
				(*t >= 'a' && *t <= 'm'))
		{
			*t += 13;
		}
		else if ((*t >= 'N' && *t <= 'Z') ||
				(*t >= 'n' && *t <= 'z'))
		{
			*t -= 13;
		}
		t++;
	}

	return (s);
}
