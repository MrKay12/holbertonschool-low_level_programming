#include <string.h>
#include "lists.h"

/**
 * add_node_end - function
 *
 *@head: double pointer
 *@str: pointer
 *
 *Return: the new node at end of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t;
	char *nstr;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	nstr = strdup(str);

	if (nstr == NULL)
		return (NULL);

	n = malloc(sizeof(list_t));

	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	n->str = nstr;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		t = *head;
		while (t->next != NULL)
			t = t->next;

		t->next = n;
	}

	return (n);
}
