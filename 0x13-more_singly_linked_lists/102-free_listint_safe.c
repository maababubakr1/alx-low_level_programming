#include "lists.h"

/**
 *free_listint_safe - A function that frees a listint_t list
 *@h: A pointer to the first node
 *Return: The size of the list to be freed
 */

size_t free_listint_safe(listint_t **h)
{
	int i;
	size_t count = 0;
	listint_t *temp;

	if (!*h || !h)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;

		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}

		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
