#include "main.h"
#include <stddef.h>

/**
 * _strchr - function
 *
 * @s: pointer
 * @c: 1st input
 *
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
