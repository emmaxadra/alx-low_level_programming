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
	char c;
	char i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

