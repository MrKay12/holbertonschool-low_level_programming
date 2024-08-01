#include "lists.h"

/**
 * dlistint_len - function
 *
 *@h: pointer
 *
 *Return: Always 0
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
