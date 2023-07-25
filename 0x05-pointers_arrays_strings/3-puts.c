#include "main.h"

/**
 * _puts -print a string follwed by a new line
 *
 * @str: string parameter to print
 *
 * return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}

