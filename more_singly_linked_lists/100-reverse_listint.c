#include "lists.h"
/**
 * reverse_listint - structure to print
 * @head: pointer of the list
 * Return: pointer of the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new, *old;

	if (*head == NULL && head == NULL)
		return (NULL);
	old = NULL;
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}
	(*head) = old;
	return (*head);
}
