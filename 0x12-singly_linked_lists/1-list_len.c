#include <stdlib.h>
#include "lists.h"
size_t list_len(const list_t *h)
{
	return list_len_iterative(h);
}

size_t list_len_iterative(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
