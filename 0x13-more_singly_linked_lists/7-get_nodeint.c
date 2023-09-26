#include "lists.h"

/**
 *get_nodeint_at_index - A function that returns the nth node of a linked list.
 *@head: first node of the linked list.
 *@index: is the index of the node
 *Return: the nth of the node , or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}

