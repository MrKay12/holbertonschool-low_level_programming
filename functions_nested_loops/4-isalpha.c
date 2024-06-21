#include <stdio.h>
#include "main.h"

/**
* _isalpha - Entry point
* @c: is an input
* Return: Always 0 (Success)
*/

int _isalpha(int c)
{
	for (c = 65; c <= 122; c++)
	{
		if (c == 'c' || c == 'C')
		{
			return (1);
		}
	}

	return (0);
}
