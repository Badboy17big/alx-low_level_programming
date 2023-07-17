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
	char x = 'z';

	while (x >= 'a')
	{
	puchar(x);
	x--;
	}
	putchar('\n');

	return (0);
}
