#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_nconcat - funtion
 *
 * @s1: 1st pointer
 * @s2: 2nd pointer
 * @n: var
 *
 *Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k = 0;
	unsigned int l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[k] != '\0')
		k++;

	while (s2[l] != '\0')
		l++;

	if (n >= l)
		n = l;

	s = (char *)malloc(k + n + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[k + j] = s2[j];

	s[k + n] = '\0';

	return (s);
}
