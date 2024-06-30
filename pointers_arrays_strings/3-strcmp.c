#include "main.h"

/**
 * _strcmp - function
 *
 * @s1: 1st pointer
 * @s2: 2nd pointer
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
