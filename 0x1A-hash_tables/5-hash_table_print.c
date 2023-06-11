#include "hash_tables.h"
/**
 * hash_table_print - print ht
 * @ht: ht
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (temp)
		{
			while (temp)
			{
				if (flag == 1)
					printf(", ");
				printf("\'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
				flag = 1;
			}

		}
	}
	printf("}\n");

}
