#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created(unsigned long int size)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *h_table;
    unsigned long int i;

    h_table = malloc(sizeof(hash_table_t));
    if (h_table == NULL)
        return NULL;
    h_table->size = size;
    h_table->array = malloc(size * sizeof(hash_node_t *));
    if (h_table->array == NULL)
    {
        free(h_table);
        return NULL;
    }
    for (i = 0; i < size; i++)
        h_table->array[i] = NULL;
    return (h_table);
}
