#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees linked list with head set to null
 * @head:pointer to a pointer to a linked list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *sub;

	if (head == NULL)
		return;

	sub = *head;
	while (sub)
	{
		temp = sub;
		sub = sub->next;
		free(temp);
	}
	*head = NULL;
}
