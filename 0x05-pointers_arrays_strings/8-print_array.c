#include "main.h"

/**
 * print_array - print reversed string
 *@n: pointer to the string to print
 *@a: pointer to the string to print
 *Returen: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
