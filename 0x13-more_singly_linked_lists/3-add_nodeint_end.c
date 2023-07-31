#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *add_nodeint_end - function to add node at end of list
  *@head: pointer to the first node of list
  *@n: value for member n
  *Return: newnode or Null
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	if (newnode != NULL)
	{
		newnode->n = n;
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
