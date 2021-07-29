#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: how big the table is
 * Return: a pointer to the newly created hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array  = malloc(sizeof(hash_table_t *) * size);
	table->size = size;
	if (table->array == NULL)
		return (NULL);
	return (table);
}
