#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - function
 *
 * @s1: 1st pointers
 * @s2: 2nd pointer
 *
 * Return: Always 0
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;
	unsigned int l = 0;
	char *s;

	for (i = 0; s1 && s1[i] != '\0'; i++)
		k++;

	for (i = 0; s2 && s2[i] != '\0'; i++)
		l++;

	s = (char *)malloc((k + l + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		s[i] = s1[i];

	for (j = 0; j < l; j++)
		s[k + j] = s2[j];

	s[k + l] = '\0';

	return (s);
}
