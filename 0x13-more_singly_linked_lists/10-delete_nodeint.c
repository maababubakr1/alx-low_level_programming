#include "lists.h"

/**
 *delete_nodeint_at_index - A function that deletes the node
 *at index index of a listint_t linked list
 *@head: A pointer to the fisrt node
 *@index: The index of the node that should be deleted
 *Return: 1 (Success), -1 (Failed)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *last = *head;
	listint_t *temp = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}

	while (count < index - 1)
	{
		if (!last || !(last->next))
			return (-1);
		last = last->next;
		count++;
	}

	temp = last->next;
	last->next = temp->next;
	free(temp);

	return (1);
}
