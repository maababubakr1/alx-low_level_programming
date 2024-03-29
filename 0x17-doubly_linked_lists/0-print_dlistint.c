#include "lists.h"

/**
 *print_dlistint - prints all the elements of the list
 *@h: head of list
 *Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
