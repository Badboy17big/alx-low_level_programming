#include <unistd.h>
#include "main.h"

/**
 * _putchar -  Entry point
 *
 * @c: using sizeof to print the size of various types on the computer
 *
 * Return: on success 1.
 *	on error, -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
