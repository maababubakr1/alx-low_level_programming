#include "lists.h"

/**
 *insert_nodeint_at_index - A function that inserts a new node
 *at a given position.
 *@head: A pointer for the first node.
 *@idx: the index of the list where the new node should be added.
 *@n: data to be inserted at the new node
 *Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new;
	unsigned int count;

	/* making new node */
	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* adding new node in empty list */
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}

	/* adding new node at specific index */
	for (count = 0; temp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		else
			temp = temp->next;
	}

	return (NULL);
}
