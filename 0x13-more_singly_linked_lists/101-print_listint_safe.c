#include "lists.h"

/**
 *print_listint_safe - A function that prints a listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *len = NULL;
	size_t count = 0;
	size_t i;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;

		len = head;
		i = 0;
		while (i < count)
		{
			if (temp == len)
			{
				printf(" -> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			len = len->next;
			i++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
