#include <unistd.h>

/**
 * _putchar: fiels the chracter c to 
 * @c: the teh character to print
 *
 * return: access 1.
 */
int _putchar(char c)
{
	return (write(1, &c;, 1));
}
