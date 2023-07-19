#include "main.h"

/**
 * print_sgin -  Entry point
 *
 * @n: using sizeof to print the size of various types on the computer
 *
 * Return: always 0 (success)
*/

int print_sign(int n)
	
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
        else
	{
		_putchar(45);
		return (-1);
	}
}
