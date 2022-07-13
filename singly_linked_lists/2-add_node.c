#include "lists.h"
/**
 * _strlen - structure to print
 * @str: new list
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}
/**
 * add_node - structure to print
 * @head: linked list pointer
 * @str: new list
 * Return: address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	if (head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (new);
}
