#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all the data in the list
 *@head: pointer to the head of the list
 *Return: The sum of all the data in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
