#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: input prameter 1
 * @b: input prameter 2
 *
 * return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
