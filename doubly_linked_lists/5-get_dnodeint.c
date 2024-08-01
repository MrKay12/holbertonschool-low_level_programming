#include "lists.h"

/**
 * get_dnodeint_at_index - function
 *
 *@head: pointer to pointer
 *@index: index
 *
 *Return: Always 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *i = head;
	unsigned int j = 0;

	while (i != NULL)
	{
		if (j == index)
			return (i);
		j++;
		i = i->next;
	}

	return (NULL);
}
