#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - searches for nth node of a listint_t linked list.
* @head: linked list to print
* @index: index of the node, starting from 0.
*
* Return: to the nth node, NULL otherwise.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
return (head);
}
