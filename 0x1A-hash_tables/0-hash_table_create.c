#include "hash_tables.h"
/**
 *hash_table_create - This is the entry point of the code
 *@size: kagerfreqiu
 *Return:0 Success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->array = malloc(sizeof(hash_node_t) * size);

	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (i = 0; i < size; ++i)
	{
		hash_table->array[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}

