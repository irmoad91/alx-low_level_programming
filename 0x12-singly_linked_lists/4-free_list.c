#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head of the link list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		c_node = head->next;
		free(head->str);
		free(head);
		head = c_node;
	}
}
