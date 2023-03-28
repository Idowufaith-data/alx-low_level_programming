#include "main.h"
/**
 * swap_int - holds the pointers pointing to variables a and b
 *
 * @a: parameter
 * @b: parameter
 *
 * Description - a function that swaps the values of two integers
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

