#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node of the list
 *@head: pointer to the head of list
 *@index: node to loacte
 *Return: The nth node of the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
