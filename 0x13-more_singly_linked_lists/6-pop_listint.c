#include "lists.h"

/**
 *pop_listint - A function that deletes the head node
 *@head: A pointer to the head node
 *Return: The head node data or 0.
 */

int pop_listint(listint_t **head)
{

	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}

