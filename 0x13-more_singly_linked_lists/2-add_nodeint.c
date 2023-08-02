#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a node at the beginning of a linked list
 * @head: pointer to a pointer of a linked list
 * @n: input integer
 * Return: Address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
