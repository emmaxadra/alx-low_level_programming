#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: using main function
 *
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	} else if (lastn == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, lastn);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, lastn);
	}
	return (0);
}



