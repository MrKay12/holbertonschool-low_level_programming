#include <stdio.h>
#include "main.h"

/**
* _isupper - Entry point
* @c : input
*
* Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
