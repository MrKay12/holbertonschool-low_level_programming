#include "lists.h"

/**
 *print_list - function
 *
 *@h: pointer
 *
 *Return: node count
 */

size_t print_list(const list_t *h)
{
	size_t nc = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nc++;
	}

	return (nc);
}
