#include "main.h"

/**
 * _strcat - function
 *
 * @dest: 1st pointer
 * @src: 2nd pointer
 * @n : input
 * Return: Always 0
 */

char *_strcat(char *dest, char *src, int n)
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
