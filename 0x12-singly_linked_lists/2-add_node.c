#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - function that adds a node at the beginning of a linked list
 * @head: pointer to pointer to list
 * @str: input character to add
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int num = 0;
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	while (str[num])
		num++;

	add->len = num;
	add->str = strdup(str);
	add->next = *head;
	*head = add;

	return (add);
}
