#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of a and b
 * @a: first integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
