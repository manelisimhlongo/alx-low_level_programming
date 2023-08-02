#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - function that print number of nodes
 * @h: pointer to address of first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
