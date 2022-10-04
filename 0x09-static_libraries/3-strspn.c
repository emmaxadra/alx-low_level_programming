#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string to be searched.
 * @accept: the prefix measured.
 *
 * Return: the number of byte in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
