#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to the head of the list
 * @n: integer to insert in the new element
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *c_node = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node != NULL)
	{
		n_node->n = n;
		n_node->next = NULL;
	}
	else
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	else
	{
		while (c_node->next)
		{
			c_node = c_node->next;
		}
		c_node->next = n_node;
	}
	return (n_node);
}
