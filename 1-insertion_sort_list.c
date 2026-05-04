#include "sort.h"

/**
 * swap_nodes - Swaps two nodes with each other
 *
 * @list: List of nodes
 * @a: Node place holder
 * @b: Node place holder
 *
 * Return: Void
 */
void swap_nodes(listint_t **list, listint_t *a, listint_t *b)
{
	listint_t *a_prev = a->prev;
	listint_t *b_next = b->next;

	if (!a || !b)
		return;
	if (a_prev)
		a_prev->next = b;
	else
		*list = b;
	if (b_next)
		b_next->prev = a;

	b->prev = a_prev;
	b->next = a;
	a->prev = b;
	a->next = b_next;
}

/**
* insertion_sort_list - sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm
*
* @list: Doubly linked list to be printed
*
* Return: Void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *node_a, *node_b;

	if (!list || !*list)
		return;
	for (node_a = (*list)->next; node_a != NULL;)
	{
		listint_t *original_next = node_a->next;

		node_b = node_a;
		while (node_b->prev && node_b->n < node_b->prev->n)
		{
			swap_nodes(list, node_b->prev, node_b);
			print_list(*list);
		}
		node_a = original_next;
	}
}
