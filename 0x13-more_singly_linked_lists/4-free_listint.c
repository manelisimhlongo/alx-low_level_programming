#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees linked list
 * @head: pointer to list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
