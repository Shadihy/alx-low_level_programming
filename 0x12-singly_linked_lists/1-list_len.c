#include "lists.h"

/**
 * list_len - Finds the number of ments in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of ments in h.
 */
size_t list_len(const list_t *h)
{
	size_t ments = 0;

	while (h)
	{
		ments++;
		h = h->next;
	}

	return (ments);
}
