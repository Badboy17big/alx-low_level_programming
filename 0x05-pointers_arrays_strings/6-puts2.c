#include "main.h"

/**
 * puts2 - print reversed string
 *@str: pointer to the string to print
 *Returen: void
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	_putchar('\n');
}
