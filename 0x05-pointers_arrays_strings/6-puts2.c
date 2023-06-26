#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	int i =0;
	
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
