#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - test hash_table_set with collisions
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *tmp;
    unsigned long int index;

    ht = hash_table_create(1024);

    /* Ajouter des clés normales */
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hello", "world");

    /* Test collisions */
    hash_table_set(ht, "hetairas", "value1");
    hash_table_set(ht, "mentioner", "value2"); /* collide avec hetairas */
    hash_table_set(ht, "heliotropes", "value3");
    hash_table_set(ht, "neurospora", "value4"); /* collide avec heliotropes */

    /* Affichage des buckets pour vérifier le chaining */
    index = key_index((unsigned char *)"hetairas", ht->size);
    printf("Bucket for 'hetairas':\n");
    tmp = ht->array[index];
    while (tmp)
    {
        printf("%s: %s\n", tmp->key, tmp->value);
        tmp = tmp->next;
    }

    index = key_index((unsigned char *)"heliotropes", ht->size);
    printf("Bucket for 'heliotropes':\n");
    tmp = ht->array[index];
    while (tmp)
    {
        printf("%s: %s\n", tmp->key, tmp->value);
        tmp = tmp->next;
    }

    return (EXIT_SUCCESS);
}

