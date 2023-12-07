#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs of a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    char *ma = "";

    if (!ht)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            printf("%s'%s': '%s'", ma, node->key, node->value);
            ma = ", ";
            node = node->next;
        }
    }

    printf("}\n");
}
