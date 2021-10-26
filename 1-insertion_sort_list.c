#include "sort.h"

/**
 * insertion_sort_list - is a simple sorting algorithm that builds
 * the final sorted array (or list) one item at a time.
 *
 * @list: List of an array of integers.
 *
 * Return: Void Function
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmpValue = *list, *tmpValue1 = tmpValue->next;
	int index = 0, i;

	if (*list == NULL || list == NULL)
		return;
	if ((*list)->next == NULL && (*list)->previous == NULL)
		return;
	while (tmpValue1 != NULL)
	{
		if (tmpValue->n > tmpValue1->n)
		{
			tmpValue1->previous = tmpValue->previous;
			tmpValue->next = tmpValue1->next;
			tmpValue->previous = tmpValue1;
			tmpValue1->next = tmpValue;
			if (tmpValue1->previous == NULL)
			{
				if (tmpValue->next != NULL)
					tmpValue->next->previous = tmpValue;
				*list = tmpValue1;
			}
			else if (tmpValue->next == NULL && tmpValue1->previous != NULL)
				tmpValue1->previous->next = tmpValue1;
			else if (tmpValue1->previous != NULL && tmpValue->next != NULL)
			{
				tmpValue->next->previous = tmpValue;
				tmpValue1->previous->next = tmpValue1;
			}
			print_list(*list);
			tmpValue = tmpValue1->previous;
			while (tmpValue != NULL)
			{
				if (tmpValue->n > tmpValue1->n)
				{
					tmpValue1->previous = tmpValue->previous;
					tmpValue->next = tmpValue1->next;
					tmpValue->previous = tmpValue1;
					tmpValue1->next = tmpValue;
					if (tmpValue1->previous == NULL)
					{
						tmpValue->next->previous = tmpValue;
						*list = tmpValue1;
					}
					else
					{
						tmpValue->next->previous = tmpValue;
						tmpValue1->previous->next = tmpValue1;
					}
					print_list(*list);
				}
				tmpValue1 = tmpValue;
				tmpValue = tmpValue->previous;
			}
		}
		tmpValue = *list;
		index += 1;
		for (i = 0; index > i; i++)
		{
			tmpValue = tmpValue->next;
			tmpValue1 = tmpValue->next;
		}
	}
}
