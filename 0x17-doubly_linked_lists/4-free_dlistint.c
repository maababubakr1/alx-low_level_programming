#include "lists.h"

/**
 *free_dlistint - Function that frees the list
 *@head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
