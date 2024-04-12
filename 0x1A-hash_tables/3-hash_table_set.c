#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: The key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *arr;
	char *vcopy;
	unsigned long int i, index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vcopy = strdup(value);
	if (vcopy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcopy;
			return (1);
		}
	}

	arr = malloc(sizeof(hash_node_t));
	if (arr == NULL)
	{
		free(vcopy);
		return (0);
	}
	arr->key = strdup(key);
	if (arr->key == NULL)
	{
		free(arr);
		return (0);
	}
	arr->value = vcopy;
	arr->next = ht->array[index];
	ht->array[index] = arr;

	return (1);
}
