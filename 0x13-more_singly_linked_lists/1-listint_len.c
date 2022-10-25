#include "lists.h"

/**
 * listint_len - counts the number if nodes in the linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor 1 = NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
