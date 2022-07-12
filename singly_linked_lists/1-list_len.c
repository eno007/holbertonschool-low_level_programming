#include "lists.h"
#include <stdio.h>
/**
 * list_len - structure to print
 * @h: linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
