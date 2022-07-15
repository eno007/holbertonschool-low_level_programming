#include "lists.h"
/**
 * count_nodes - function to count nodes
 * @head: pointer of the list
 * Return: number of nodes before loop
 */
int count_nodes(const listint_t *head)
{
	int count = 0;
	const listint_t *new, *old;

	new = old = head;
	while (new != NULL && old != NULL)
	{
		new = new->next;
		old = old->next->next;
		count++;
		if (new == old)
		{
			new = head;
			while (new != old)
			{
				new = new->next;
				old = old->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}
/**
 * loop - structure to print
 * @head: pointer of the list
 * Return: number of nodes or exit (98) if fails
 */
int loop(const listint_t *head)
{
	const listint_t *new, *old;

	new = old = head;
	while (new != NULL && old != NULL)
	{
		new = new->next;
		old = old->next->next;
		if (new == old)
			return (1);
	}
	return(0);
}
/**
 * print_listint_safe - structure to print
 * @head: pointer of the list
 * Return: number of nodes or exit (98) if fails
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	int count = 0;
	int loop_checked;
	size_t total_nodes = 0;

	if (head == NULL)
		exit(98);
	loop_checked = loop(head);
	if (loop_checked == 1)
	{
		count = count_nodes(head);
		for (loop_checked = 0; loop_checked < count; loop_checked++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			total_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_checked == 0)
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			total_nodes += 1;
			tmp = tmp->next;
		}
	}
	return (total_nodes);
}
