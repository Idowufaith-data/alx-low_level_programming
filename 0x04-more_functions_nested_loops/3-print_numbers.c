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
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
