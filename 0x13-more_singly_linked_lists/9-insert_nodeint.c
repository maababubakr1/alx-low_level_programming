#include "lists.h"

/**
 *insert_nodeint_at_index - A function that inserts a new node
 *at a given position.
 *@head: 
 *@idx: the index of the list where the new node should be added.
 *@n: 
 *Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
