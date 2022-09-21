#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination strings
 * @src: the source string
 * Return: the pointer to @dest
 */
char *_strcat(cat *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		desk[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

