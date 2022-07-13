#include "lists.h"
/**
 * free_list - structure to print
 * @head: linked list pointer
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
