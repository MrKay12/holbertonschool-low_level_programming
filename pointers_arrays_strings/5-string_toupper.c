#include "main.h"

/**
 * string_toupper - Function
 *
 * @str: pointer
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{

	for (char *i = str; *i; i++)
	{
		if (*i >= 'a' && *i <= 'z')
		{
			*i -= 3;
		}
	}

	return (str);
}
