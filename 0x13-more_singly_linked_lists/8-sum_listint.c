#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to linked list
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
