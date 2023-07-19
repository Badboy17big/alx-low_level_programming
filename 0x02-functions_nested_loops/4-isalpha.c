#include"main.h"

/**
 * _islower - check the code.
 *
 *@c: cheks input of function
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
