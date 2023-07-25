#include "main.h"

/**
 * *_strcpy - print reversed string
 * @dest: pointer to the string to print
 * @src: pointer to the string to print
 * description: copy the string pointed
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
