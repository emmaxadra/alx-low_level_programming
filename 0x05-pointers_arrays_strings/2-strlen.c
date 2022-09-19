#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the length of a string
 * @s: string to check
 * Return: return the length of an integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
