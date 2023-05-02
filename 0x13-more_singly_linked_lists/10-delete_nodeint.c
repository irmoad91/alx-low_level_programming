#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c_node = *head, *del = NULL;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(c_node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (c_node->next == NULL)
		{
			return (-1);
		}
		c_node = c_node->next;
	}
	del = c_node->next;
	c_node->next = del->next;
	free(del);
	return (1);
}
