#include "main.h"

/**
 * main -  Entry point
 *
 * descreption: using sizeof to print the size of various types on the computer
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
