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
	int x = 0;

	while (x <= 9)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");

	return (0);
}
