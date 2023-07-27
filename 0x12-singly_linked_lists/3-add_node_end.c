#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
  *add_node_end - function to add node at the end
  *@head: pointer to struct variable
  *@str: member of struct
  *
  *Return: new node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	if (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
	}
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}
