#include <stdio.h>

/**
 * main -  Entry point
 *
 * descreption: using putchar for the alphabtical
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char Lch = 'a';

	while (Lch <= 'z')
	{
		if (Lch == 'q' || Lch == 'e')
			Lch++;
		putchar(Lch);
		Lch++;
	}
	putchar('\n');

	return (0);
}
