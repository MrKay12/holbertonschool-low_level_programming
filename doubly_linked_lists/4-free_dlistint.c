#include "lists.h"

/**
 * free_dlistint - function for free mem
 *
 *@head: pointer list start
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
