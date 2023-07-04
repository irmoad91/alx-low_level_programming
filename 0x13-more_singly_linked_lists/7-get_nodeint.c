#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head->next; i++)
	{
		head = head->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
