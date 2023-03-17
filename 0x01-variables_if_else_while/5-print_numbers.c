#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all single digit numbers starting from 0, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	printf("%i", i);
	}
	putchar('\n');

	return (0);
}
