#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that lists the number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
