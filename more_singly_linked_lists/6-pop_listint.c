#include "lists.h"
/**
 * pop_listint - structure to print
 * @head: pointer of the list
 * Return: Data or 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
