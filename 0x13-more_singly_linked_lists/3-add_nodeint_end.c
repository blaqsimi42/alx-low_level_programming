#include <string.h>
#include "lists.h"

/**
* add_nodeint_end - adds new node to the end of a singly linked list.
* @head: linked list to print
* @n: the value to be added.
*
* Return: the address of new element, or NULL if failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp_node; /* Create a new node */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL; /* Point it to null */

	/* if head is NULL, it is an empty list */
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	tmp_node = *head;
	while (tmp_node->next)
		tmp_node = tmp_node->next;

	tmp_node->next = new_node;	/* Point head to new node */

	return (new_node);
}
