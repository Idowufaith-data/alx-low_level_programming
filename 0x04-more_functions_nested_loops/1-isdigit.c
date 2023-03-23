#include "main.h"

/**
 *_isdigit - checks for a digit
 *
 * Description - check for digit 0 through 9
 * @c: character
 * Return: void
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
