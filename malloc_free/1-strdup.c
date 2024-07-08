#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - funtion
 *
 * @str: pointer
 *
 *Return: Always 0
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *s;


	while (str[j] != '\0')
		j++;

	s = malloc(j);

	if (str == NULL)
		return (NULL);

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		s[i] = str[i];

	return (s);
}
