#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: the head of the link list
 * @str: string to add in the list
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t c_node;
	unsigned int n = 0;

	n_node = malloc(sizeof(list_t));
	if (!n_node)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	while (str[n])
	{
		n++;
	}
	n_node->len = n;
	n_node->next = NULL;
	c_node = *head;
	if (c_node == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (c_node->next != NULL)
		{
			c_node = c_node->next;
		}
		c_node->next = n_node;
	}
	return (*head);
}
