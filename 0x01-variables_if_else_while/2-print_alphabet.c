#include <stdio.h>

/**
 * main - entry point
 *
 * Description: the main function
 *
 * Return: 0
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		purchar(a);
	putchar('\n');
	return (0);
}
