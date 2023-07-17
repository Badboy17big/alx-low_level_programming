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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
