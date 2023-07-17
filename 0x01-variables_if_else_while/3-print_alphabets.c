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
	char Uch = 'A', Lch = 'a';

	while (Lch <= 'z')
	{
		putchar(Lch);
		Lch++;
	}
	while (Uch <= 'Z')
	{
		putchar(Uch);
		Uch++;
	}
	putchar('\n');
	return (0);
}
