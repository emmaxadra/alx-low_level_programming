#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: the pointer to @dest
 */

char *_strcat(cat *dest, char *src)
{
	
	int dlen = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
