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
	unsigned int i;
	unsigned int j = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	
	while (str[j] != '\0')
		j++;

	s = (char *)malloc((j + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		s[i] = str[i];

	return (s);
}
