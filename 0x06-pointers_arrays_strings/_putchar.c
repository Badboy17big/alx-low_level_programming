#include <unistd.h>

/**
 * _putchar - wriets the chracter c to stdout
 * @c: The character to print 
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(cahr c)
{
	return (write(1, &c, 1));
}
