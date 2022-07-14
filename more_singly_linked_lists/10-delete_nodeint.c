#include "lists.h"
/**
 * delete_nodeint_at_index - structure to print
 * @head: pointer of the list
 * @index: index to insert new node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp2, *tmp;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != (index - 1) || tmp->next == NULL)
		return (-1);
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);
	return (1);
}
