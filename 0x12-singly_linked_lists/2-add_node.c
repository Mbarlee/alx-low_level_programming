#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_mode;
	size_t n;

	new_mode = malloc(sizeof(list_t));
	if (new_mode == NULL)
		return (NULL);

	new_mode->str = strdup(atr);

	for (n = 0; str[n]; n++)
		;
	new_mode->len = n;
	new_mode->next = *head;
	*head = new_mode;

	return (*head);
}
