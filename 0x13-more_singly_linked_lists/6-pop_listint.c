#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the head of the list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *c_node;
	int n;

	c_node = *head;
	if (c_node == NULL)
	{
		return (0);
	}
	*head = c_node->next;
	n = c_node->n;
	free(c_node);

	return (n);
}
