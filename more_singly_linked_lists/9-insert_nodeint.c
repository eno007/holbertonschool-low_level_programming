#include "lists.h"
/**
 * insert_nodeint_at_index - structure to print
 * @head: pointer of the list
 * @idx: index to insert new node
 * @n: new node data
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new_node;
		return (new);
	}
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
