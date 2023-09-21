#include "lists.h"

/**
 *add_node - A function that adds a new node at the beginning of a list_t list.
 *@head: A double pointer to the list
 *@str: New node to be added
 *Return: The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	unsigned int i;

	i = 0;

	tmp = malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	while (str[i])
		i++;

	tmp->str = strdup(str);
	tmp->len = i;
	tmp->next = (*head);
	(*head) = tmp;

	return (*head);
}
