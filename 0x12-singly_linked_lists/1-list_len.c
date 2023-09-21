#include "lists.h"

/**
 *list_len - A function that returns the number of elements in a linked list.
 *@h: A pointer to the list
 *Return: The number of elements in a linked list_t list
 *
 */

size_t list_len(const list_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		h = h->next;
	}

	return (no);
}
