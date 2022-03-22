#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 *
 * @a: an input int pointer
 * @b: an input int pointer
 *
 * Return: nothin.
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
