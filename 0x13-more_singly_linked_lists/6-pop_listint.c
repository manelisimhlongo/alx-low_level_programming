#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node data
 * @head: pointer to a pointer of a linked list
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
