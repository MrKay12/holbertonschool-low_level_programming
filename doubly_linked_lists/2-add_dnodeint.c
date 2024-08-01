#include "lists.h"

/**
 * add_dnodeint - function
 *
 *@head: pointer to pointer
 *@n: integer
 *
 *Return: Always 0
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nn = malloc(sizeof(dlistint_t));

	if (nn == NULL)
		return (NULL);

	nn->n = n;
	nn->prev = NULL;
	nn->next = *head;

	if (*head != NULL)
		(*head)->prev = nn;

	*head = nn;

	return (nn);
}
