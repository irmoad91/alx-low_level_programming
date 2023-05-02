#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value to insert in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_node, *c_node = *head;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (c_node == NULL || c_node->next == NULL)
		{
			return (NULL);
		}
		c_node = c_node->next;
	}
	n_node->next = c_node->next;
	c_node->next = n_node;

	return (n_node);
}
