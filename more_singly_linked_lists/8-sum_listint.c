#include "lists.h"
/**
 * sum_listint - structure to print
 * @head: pointer of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
