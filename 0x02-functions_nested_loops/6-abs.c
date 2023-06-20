#include "main.h"
#include <stdio.h>

/**
  *_abs - function returns the absolute value of an integer argument n.
  *@n:  Description of parameter x
  *
  *Description: There is no error return value.
  * section header: Section description)*
  * Return: Description of the returned value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	return (n);
}
