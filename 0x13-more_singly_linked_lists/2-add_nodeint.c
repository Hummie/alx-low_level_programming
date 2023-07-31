#include "lists.h"
#include <stdlib.h>
/**
  *add_nodeint - function to add node at start of list
  *@head: pointer to 1st element of list
  *@n: Value of memnber n.
  *Return: newnode or null
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));


	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
