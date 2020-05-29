#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size : size of the hash table
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_t;

if (!size)
{
return (NULL);
}
hash_t = malloc(sizeof(hash_table_t));
if (!hash_t)
{
return (NULL);
}
hash_t->size = size;
hash_t->array = malloc(sizeof(hash_t->array) * size);
if (!hash_t->array)
{
return (NULL);
}
return (hash_t);
}
