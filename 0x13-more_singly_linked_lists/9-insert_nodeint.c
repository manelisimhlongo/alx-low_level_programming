#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a node at a specific index
 * @head: pointer to a pointer to a linked list
 * @idx: position to place new node
 * @n: value for new node
 * Return: Address to new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *temp2 = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (temp2 == NULL)
		return (NULL);

	temp2->n = n;
	temp2->next = NULL;

	if (idx == 0)
	{
		temp2->next = *head;
		*head = temp2;
		return (temp2);
	}

	idx--;
	while (idx > 0)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL)
	{
		free(temp2);
		return (NULL);
	}

	temp2->next = temp->next;
	temp->next = temp2;
	return (temp2);
}
