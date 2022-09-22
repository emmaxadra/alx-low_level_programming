#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates @src to @dest
 * @dest: the destination string to be concatenated upon
 * @src: source string to append to @dest
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index = 0,
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
