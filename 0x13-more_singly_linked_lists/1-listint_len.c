#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that returns number of elements in a linked list
 * @h: pointer to node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
