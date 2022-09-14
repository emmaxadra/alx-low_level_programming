#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from input to 98,
 *
 * Description: print natural numbers
 *
 * @n: the number to begin counting at.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{

				for (i = n; i <= 98; i++)
				{
					printf("%d", i);
					if (i != 98)
					{
						printf(", ");
					}
				}
	}
	printf("\n");
}

