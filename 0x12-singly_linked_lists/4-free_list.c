#include "lists.h"

/**
 *free_list - A function that frees the list
 *@head: list to be freed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free (head);
}
