#include <stdio.h>

/**
 * main - Entry point
 *
 * prints the alphabets except q and e in lowercase, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
if (ch == 'e' || ch == 'q')
ch++;
}
putchar('\n');
return (0);
}
