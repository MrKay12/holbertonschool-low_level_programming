#include <string.h>
#include "lists.h"

/**
 * add_node - function
 *
 *@head: double pointer
 *@str: pointer
 *
 *Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	char *nstr;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	nstr = strdup(str);

	if (nstr == NULL)
		return (NULL);

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);

	n->str = nstr;
	n->len = len;
	n->next = *head;

	*head = n;

	return (n);
}
