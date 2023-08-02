#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - function that delets a node at a specific index
 * @head: pointer to a pointer of alinked list
 * @index: input index to node to be deleted
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *sub;
	unsigned int i = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	sub = NULL;
	while (i != index)
	{
		sub = temp;
		temp = temp->next;
		i++;
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	if (i == index)
	{
		sub->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
