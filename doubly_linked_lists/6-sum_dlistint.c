#include "lists.h"

/**
 * sum_dlistint - function
 *
 *@head: pointer
 *
 *Return: Always 0
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *j = head;

	while (j != NULL)
	{
		i += j->n;
		j = j->next;
	}

	return (i);
}
