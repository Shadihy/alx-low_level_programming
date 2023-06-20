#include "main.h"

/**
 * _isalpha -  to check that a character is an alphabet or not
 * @c: Description of parameter x
 *
 * Description: This function is declared in “ctype. h” header file
 * section header: Section description)*
 * Return: It returns an integer value,
 *if the argument is an alphabet otherwise, it returns zero
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

