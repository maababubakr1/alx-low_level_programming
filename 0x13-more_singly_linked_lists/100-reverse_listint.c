#include "lists.h"

/**
 *reverse_listint - A function that reverses a listint_t linked list.
 *@head: A pointer to the first node
 *Return:pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *backward = NULL;
	listint_t *forward = NULL;

	while (*head)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = (*head);
		*head = forward;
	}

	*head = backward;

	return (*head);
}
