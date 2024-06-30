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
	char *i = str;

	while (*i)
	{
		*i = (*i >= 'a' && *i <= 'z') ? *i - 32 : *i;
		i++;
	}

	return (str);

}
