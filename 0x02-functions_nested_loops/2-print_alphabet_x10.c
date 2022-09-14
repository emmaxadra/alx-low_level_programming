#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Description: print_alphabet_x10 times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 0; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

