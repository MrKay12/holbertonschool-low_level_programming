#include "main.h"
#include <stddef.h>

/**
 * _strstr - function
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		n = needle;

		while (*h && (*h == *n))
		{
			h++;
			n++;

			if (*n == '\0')
			{
				haystack++;
				return (haystack);
			}
		}

		haystack++;
		h++;
	}

	return (NULL);
}
