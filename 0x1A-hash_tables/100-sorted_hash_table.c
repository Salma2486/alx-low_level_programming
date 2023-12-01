#include "hash_tables.h"

shash_node_t *create_snode(const char *key, const char *value);
void insert_snode(shash_table_t *ht, shash_node_t *new_node);

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = malloc(sizeof(shash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(shash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	for (unsigned long int i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the ke
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}

		temp = temp->next;
	}
	new_node = create_snode(key, value);
	if (new_node == NULL)
		return (0);

	insert_snode(ht, new_node);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * shash_table_get - Retrieves a value a
 * @ht: The sorted hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the key, or
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorte
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node != NULL; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != NULL;)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(ht->array);
	free(ht);
}

/**
 * create_snode - Creates a sorted hash table node.
 * @key: The key for the new node.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created node.
 */
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
 * insert_snode - Inserts a node into .
 * @ht: The hash table.
 * @new_node: The new node to insert.
 */
void insert_snode(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *node;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}

	for (node = ht->shead; node != NULL; node = node->snext)
	{
		if (strcmp(node->key, new_node->key) > 0)
		{
			new_node->sprev = node->sprev;
			new_node->snext = node;

			if (node->sprev != NULL)
				node->sprev->snext = new_node;
			else
				ht->shead = new_node;

			node->sprev = new_node;

			return;
		}
	}

	new_node->sprev = ht->stail;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}
