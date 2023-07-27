#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *add_node - function to add node
  *@head: pointer to struct list_t
  *@str: string to be duplicated
  *
  *Return: newnode
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
