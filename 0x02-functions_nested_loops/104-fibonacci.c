#include <stdio.h>

/**
 * main - main function
 *
 * Description: main function
 *
 * Return: nothing
 *
 */
int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.Of, ", a);
	printf("%.Of, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%.Of", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(",");
		}
	}
	printf("\n");
	return (0);
}
