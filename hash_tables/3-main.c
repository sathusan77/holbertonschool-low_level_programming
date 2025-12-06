/* 3-main.c */
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	if (!ht)
		return (1);

	if (!hash_table_set(ht, "bettY", "cool"))
		printf("set failed\n");
	if (!hash_table_set(ht, "betty", "awesome"))
		printf("set failed\n");
	/* replace existing key */
	if (!hash_table_set(ht, "bettY", "very cool"))
		printf("set failed\n");

	printf("done\n");
	return (0);
}

