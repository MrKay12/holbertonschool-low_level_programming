#include "main.h"

/**
 * _strncat - function
 *
 * @dest: 1st pointer
 * @src: 2nd pointer
 * @n : input
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;

	while (*i)
		i++;

	while (n-- && (*src != '\0'))
	{
		*i++ = *src++;
	}

	*i = '\0';

	return (dest);
}
