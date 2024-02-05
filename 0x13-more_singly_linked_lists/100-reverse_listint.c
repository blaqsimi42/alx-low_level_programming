#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - makes a linked list reversed.
 * @head: a pointer to first node in the linked list
 *
 * Return: pointer to the 1st node in new list, fail otherwise
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_list_head = NULL;
	listint_t *rev_list_head = NULL;

	while (*head)
	{
		curr_list_head = (*head)->next;
		(*head)->next = rev_list_head;
		rev_list_head = *head;
		*head = curr_list_head;
	}

	*head = rev_list_head;

	return (*head);
}
