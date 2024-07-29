#include "lists.h"

/**
 * free_list - function for free mem
 *
 *@head: pointer list start
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
