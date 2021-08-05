#include "lists.h"

/**
 * list_len - print counter all elements of the list
 * @h: head of linked list
 * Return:  number elements of linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
