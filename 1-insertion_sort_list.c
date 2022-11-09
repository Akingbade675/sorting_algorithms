#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in 
 * ascending order using the Insertion sort algorithm
 * @list: double linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *previous, *next_node = NULL, *tmp = *list;

	while (tmp)
	{
		tmp = !next_node ? tmp->next : next_node;
		next_node = tmp->next;
		while (tmp && tmp->n < tmp->prev->n)
		{
			previous = tmp->prev;

			if (previous->prev)
				previous->prev->next = tmp;
			else
				*list = tmp;

			tmp->prev = previous->prev;

			previous->next = tmp->next;
			previous->prev = tmp;

			if (tmp->next)
				tmp->next->prev = previous;
			tmp->next = previous;

			print_list(*list);

			if (!(tmp->prev))
				break;
		}
		if (!next_node)
			break;
	}
}
