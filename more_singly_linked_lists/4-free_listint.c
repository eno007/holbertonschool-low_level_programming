#include "lists.h"
/**
 * free_listint - structure to print
 * @head: pointer of the list
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
