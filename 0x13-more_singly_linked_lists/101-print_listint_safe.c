#include "lists.h"

/**
 *print_listint_safe - A function that prints a listint_t linked list.
 *@head: pointer to the first node of the list
 *Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		l_n = head;
		new = 0;
		while (new < count)
		{
			if (tmp == l_n)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			l_n = l_n->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
