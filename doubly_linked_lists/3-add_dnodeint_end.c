#include "lists.h"

/**
 * add_dnodeint_end - function
 *
 *@head: pointer to pointer
 *@n: integer
 *
 *Return: Always 0
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nn, *i;

	nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (*head == NULL)
	{
		nn->prev = NULL;
		*head = nn;
		return (nn);
	}

	i = *head;

	while (i->next != NULL)
		i = i->next;

	i->next = nn;
	nn->prev = i;

	return (nn);
}
