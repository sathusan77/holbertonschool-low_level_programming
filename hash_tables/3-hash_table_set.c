#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_node - creates a new hash node
 * @key: key string
 * @value: value string
 *
 * Return: pointer to the new node, or NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);

	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}

/**
 * update_value - updates the value of an existing node
 * @node: node to update
 * @value: new value
 *
 * Return: 1 if success, 0 if failed
 */
int update_value(hash_node_t *node, const char *value)
{
	char *new_value;

	new_value = strdup(value);
	if (!new_value)
		return (0);

	free(node->value);
	node->value = new_value;
	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key (cannot be an empty string)
 * @value: the value a*

