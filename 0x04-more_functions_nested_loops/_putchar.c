#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: the character to print
 *
 * Description: the _putchar function
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
