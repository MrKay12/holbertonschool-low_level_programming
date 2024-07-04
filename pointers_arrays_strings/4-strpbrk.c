#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function
 *
 * @s: 1st pointer
 * @accept: 2nd
 *
 *
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *a = accept;

	while (*s)
	{
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}

			a++;
		}

		s++;

	}

	return (NULL);
}
