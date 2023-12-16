#include "sort.h"

/**
 * swaping_nodes - function that swaps nodes
 * @head: pointer to the head of the list
 * @node1: pointer to the first node
 * @node2: second node
 */
void swaping_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if(node2->next != NULL)
	{
		node2->next->prev = *node1;
	}
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if((*node1)->prev != NULL)
	{
		(*node1)->prev->next = node2;
	}
	else
	{
		*head = node2;
	}
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - function that sorts list using insertion sort alg
 * @list: the double linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t **i, **put, *tmp;

	if (list == NULL || *list == NULL || (*list) == NULL)
	{
		return;
	}
	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		put = i->prev;
		while (put != NULL && i->n < put->n)
		{
			swaping_nodes(list, &put, i);
			print_list((const listint_t*)*list);
		}
	}
}
