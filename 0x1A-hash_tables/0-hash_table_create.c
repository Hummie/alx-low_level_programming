#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *hash_table_t - function that creates a hash table
  *@size: size of table.
  *Return: Table or NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;
    unsigned int i;

    if (size == 0)
        return (NULL);

    table = malloc(sizeof(hash_table_t));
    if(!table)
        return (NULL);

    table->size = size;

    table->array = malloc(sizeof(hash_node_t *) * table->size);

    if (!table->array)
	{
		free(table);
		return (NULL);
	}

	/* sets all the arrays to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}





