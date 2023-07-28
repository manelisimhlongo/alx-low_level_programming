#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of list_t
 * @h: pointer to list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		printf("[%u] ", h->len);

		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		num++;
		h = h->next;
	}
	return (num);
}
