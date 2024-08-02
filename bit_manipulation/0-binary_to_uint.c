#include "main.h"

/**
 * binary_to_uint - function
 *
 *@b: pointer
 *
 *Return: Always 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int j = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		i = (i << 1) | (b[j] - '0');
	}

	return (i);
}
