#include "main.h"

/**
 * rev_string - print reversed string
 *@s: pointer to the string to print
 *Returen: void
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[1] != '\0'; ++l)
		;

	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
