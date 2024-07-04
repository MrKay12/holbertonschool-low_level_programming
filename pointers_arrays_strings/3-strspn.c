#include "main.h"

/**
 * _strspn - function
 *
 * @s: 1st pointer
 * @accept: pointer
 *
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int j = 0;

	while (*s)
	{

		while (*accept)
		{
			if (*s == *accept)
			{
				i = 1;
				break;
			}

			accept++;
		}

		if (!i)
		{
			break;
		}

		j++;
		s++;
	}

	return (j);
}
