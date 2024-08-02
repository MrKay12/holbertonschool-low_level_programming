#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 *
 *@h: pointer
 *@idx: index
 *@n: variable
 *
 *Return: Always 0
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nn, *i;
	unsigned int j;

	nn = malloc(sizeof(dlistint_t));

	if (h == NULL)
		return (NULL);
	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->prev = NULL;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *h;
		if (*h != NULL)
			(*h)->prev = nn;
		*h = nn;
		return (nn);
	}
	i = *h;
	while (i != NULL && j < idx)
	{
		if (j + 1 == idx)
		{
			nn->next = i->next;
			nn->prev = i;
			if (i->next != NULL)
				i->next->prev = nn;
			i->next = nn;
			return (nn);
		}
		i = i->next;
		j++;
	}
	free(nn);
	return (NULL);
}
