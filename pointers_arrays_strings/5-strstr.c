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

	while (*haystack)
	{
		while (*h && (*h == *n))
		{
			h++;
			n++;
		}

		if (!n)
		{
			return haystack;
		}

		haystack++;
	}

	return (NULL);
}
