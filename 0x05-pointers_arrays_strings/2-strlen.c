#include "main.h"
#include "string.h"

/**
 * _strlen - calculates the lenght of a string
 *
 * @s: parameter
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
