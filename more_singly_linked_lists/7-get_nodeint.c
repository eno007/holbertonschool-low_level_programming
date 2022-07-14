#include "lists.h"
/**
 * get_nodeint_at_index - structure to print
 * @head: pointer of the list
 * @index: index of nth node
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);

	return (NULL);
}
