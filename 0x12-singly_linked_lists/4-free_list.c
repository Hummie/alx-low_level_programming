#include "lists.h"
#include <stdlib.h>
/**
  *free_list - function to free list
  *@head: pointer to struct list
  *
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *nxt;

	while (temp != NULL)
	{
		nxt = temp->next;
		free(temp->str);
		free(temp);
		temp = nxt;
	}
}

