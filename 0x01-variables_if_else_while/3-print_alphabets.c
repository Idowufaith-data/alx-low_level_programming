#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabet in lowercase, then in uppercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int ch;
	int c;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
