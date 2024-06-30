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
	char *i;

	for (*p = str; *p; p++)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= 3;
		}
	}

	return (str);
}
