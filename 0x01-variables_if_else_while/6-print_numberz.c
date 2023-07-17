#include <stdio.h>

/**
 * main -  Entry point
 *
 * descreption: using sizeof to print the size of various types on the computer
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char x = 0;

	while (x <= 9)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');

	return (0);
}
