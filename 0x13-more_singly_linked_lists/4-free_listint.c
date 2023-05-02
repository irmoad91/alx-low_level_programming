#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of the link list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *c_node;

	while (head)
	{
		c_node = head->next;
		head = c_node;
		free(head);
	}
}
