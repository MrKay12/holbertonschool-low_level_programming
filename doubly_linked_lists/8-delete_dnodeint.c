#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 *
 *@head: pointer
 *@index: index
 *
 *Return: Always 0
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i;
	unsigned int j = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	i = *head;

	if (index == 0)
	{
		*head = i->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(i);
		return (1);
	}

	while (i != NULL && j < index)
	{
		i = i->next;
		j++;
	}

	if (i == NULL)
		return (-1);

	if (i->prev != NULL)
		i->prev->next = i->next;

	if (i->next != NULL)
		i->next->prev = i->prev;

	free(i);

	return (1);
}
