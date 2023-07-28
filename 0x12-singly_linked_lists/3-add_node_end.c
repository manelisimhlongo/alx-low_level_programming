#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds node at the end of a linked list
 * @head: pointer to pointer to address of first node
 * @str: input string to add
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int num = 0;
	list_t *add, *temp;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);

	while (str[num])
		num++;

	add->len = num;
	add->str = strdup(str);

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = add;

	return (add);
}
