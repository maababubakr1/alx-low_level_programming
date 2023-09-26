#include "lists.h"

/**
 *sum_listint - A function that returns the sum of all the data (n)
 *of a listint_t linked list
 *@head: first node in linked list
 *Return: The sum of all the data (n) of a listint_t linked list
 *or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
