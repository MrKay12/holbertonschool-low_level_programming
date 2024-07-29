#ifndef list_h
#define list_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

/**
 *struct list - typedef
 *
 *@str: string pointer
 *@len: length
 *@next: pointer
 */

typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
