#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: list double point
 */
void insertion_sort_list(listint_t **list)
{
listint_t *next_node = NULL;
if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}
next_node = (*list)->next;
while (next_node != NULL)
{
while (next_node->previous && next_node->n < next_node->previous->n)
{
next_node->previous->next = next_node->next;
if (next_node->next != NULL)
{
next_node->next->previous = next_node->previous;
}
next_node->next = next_node->previous;
next_node->previous = next_node->previous->previous;
next_node->next->previous = next_node;
if (next_node->previous == NULL)
{
*list = next_node;
}
else
{
next_node->previous->next = next_node;
}
print_list(*list);
}
next_node = next_node->next;
}
}
