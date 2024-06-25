#include <stdio.h>
#include "main.h"

/**
 * rev_string - function
 *
 * @s: input
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	char b;
	int length = 0;
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
		length++;

	for (a = 0 ; a < length / 2 ; a++)
	{
		b = s[a];
		s[a] = s[length - a - 1];
		s[length - a - 1] = b;
	}
}
