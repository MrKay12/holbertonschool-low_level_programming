#include "main.h"

/**
 * _memset - function
 *
 * @s: pointer
 * @b: 1st input
 * @n: 2nd input
 *
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		++i;
	}

	return (s);
}
