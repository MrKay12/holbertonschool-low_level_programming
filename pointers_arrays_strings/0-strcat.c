#include "main.h"

/**
 * _strcat - function
 *
 * @dest: 1st pointer
 * @src: 2nd pointer
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i)
	{
		i++;
	}

	while ((*i++ = *src++))
		;

	return (dest);
}
