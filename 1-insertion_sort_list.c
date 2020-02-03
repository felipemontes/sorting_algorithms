#include "sort.h"
/**
 * insertion_sort_list -  Function for sort by insertion method
 * @list: Is the pointer to the linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *new_node;

	if (!(list == NULL || *list == NULL))
	{
		new_node = (*list)->next;
		while (new_node != NULL)
		{
			while (new_node->prev != NULL && new_node->n < new_node->prev->n)
			{
				new_node->prev->next = new_node->next;
				if (new_node->next != NULL)
				{
					new_node->next->prev = new_node->prev;
				}
				new_node->next = new_node->prev;
				new_node->prev = new_node->prev->prev;
				new_node->next->prev = new_node;
				if (new_node->prev == NULL)
					*list = new_node;
				else
					new_node->prev->next = new_node;
				print_list(*list);
			}
			new_node = new_node->next;
		}
	}
}
