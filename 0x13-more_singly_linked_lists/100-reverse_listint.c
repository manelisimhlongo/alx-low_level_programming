#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to a pointer to a linked list
 * Return: a pointer to the first node of the reversed link
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *sub = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		temp = (*head)->next;
		(*head)->next = sub;
		sub = *head;
		*head = temp;
	}
	*head = sub;
	return (*head);
}
