#include "main.h"

/**
 *print_numbers - Entry point
 *
 *Description - prints the numbers 0 to 9 with _putchar
 *
 *Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
