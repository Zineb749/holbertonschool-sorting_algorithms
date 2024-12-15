#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of using Insertion sort
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *swap;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			swap = temp->prev;

			if (swap->prev)
				swap->prev->next = temp;
			if (temp->next)
				temp->next->prev = swap;

			swap->next = temp->next;
			temp->prev = swap->prev;

			swap->prev = temp;
			temp->next = swap;

			if (temp->prev == NULL)
				*list = temp;

			print_list(*list);
		}
		current = current->next;
	}
}

