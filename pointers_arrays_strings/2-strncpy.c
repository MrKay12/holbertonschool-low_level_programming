#include "main.h"

/**
 * _strncpy - function
 *
 * @dest: 1st pointer
 * @src: 2nd
 * @n: input
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;

	while (n-- > 0 (*i++ = *src++))
		;

	while (n-- > 0) *i++ = '\0'
		;

	return (dest);
}
