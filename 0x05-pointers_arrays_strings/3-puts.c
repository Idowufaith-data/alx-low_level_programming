#include "main.h"

/**
 * _puts - writes a character to stdout
 *
 * Description - a function that prints a string, followed by a new
 * line to stdout
 * @str: parameter
 * Return: nothing
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
