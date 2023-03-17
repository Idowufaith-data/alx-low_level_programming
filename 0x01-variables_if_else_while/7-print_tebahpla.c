#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints the alphabets in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
int i;

for (i = 'z'; i <= 'a'; i++)
putchar(i);
putchar('\n');
return (0);
}
