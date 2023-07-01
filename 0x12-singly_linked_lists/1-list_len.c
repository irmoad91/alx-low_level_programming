#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointr to list_t
 * Return: return to number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
