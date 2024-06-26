#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function
 *
 * @dest: 1st pointer
 * @src: 2nd pointer
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int length = 0;

	for (a = 0 ; src[a] != '\0' ; a++)
		length++;

	for (a = 0 ; a <= length ; a++)
		dest[a] = src[a];

	return (dest);
}
