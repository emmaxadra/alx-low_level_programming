#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	unsigned int a = 2;
	unsigned int n = 612852475143;

	while (a != n)
	{
		if (n % a == 0)
		{
			n = n / a
		} else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}