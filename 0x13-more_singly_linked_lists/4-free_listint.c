/*
 * File: 4-free_listint.c
 */

#include "lists.h"

/**
 * free_listint - Frees the listint_t list.
 * @head: It is the  pointer to the head of the listint_t list to be freed.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
