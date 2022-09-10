#include <stdio.h>

/**
 * mains - print the sizeof many var type
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %1d byte(s)\n", sizeof(a));
	printf("size of int: %1d byte(s)\n", sizeof(b));
	printf("size of a long int: %1d byte(s)\n", sizeof(c));
	printf("size of long long int: %1d byte(s)\n", sizeof(d));
	printf("size of a float: %1d byte(s)\n", sizeof(e));
	return (0);
}


