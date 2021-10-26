#include "sort.h"
/**
 * insertion_sort_list - is a simple sorting algorithm that builds
 * the final sorted array (or list) one item at a time.
 * Done by Abubakarr
 * @list: List of an array of integers.
 *
 * Return: Void Function
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tempValue = *list, *tempValue1 = tempValue->next;
	int index = 0, i;

	if (*list == NULL || list == NULL)
		return;
	if ((*list)->next == NULL && (*list)->prev == NULL)
		return;
	while (tempValue1 != NULL)
	{
		if (tempValue->n > tempValue1->n)
		{
			tempValue1->prev = tempValue->prev;
			tempValue->next = tempValue1->next;
			tempValue->prev = tempValue1;
			tempValue1->next = tempValue;
			if (tempValue1->prev == NULL)
			{
				if (tempValue->next != NULL)
					tempValue->next->prev = tempValue;
				*list = tempValue1;
			}
			else if (tempValue->next == NULL && tempValue1->prev != NULL)
				tempValue1->prev->next = tempValue1;
			else if (tempValue1->prev != NULL && tempValue->next != NULL)
			{
				tempValue->next->prev = tempValue;
				tempValue1->prev->next = tempValue1;
			}
			print_list(*list);
			tempValue = tempValue1->prev;
			while (tempValue != NULL)
			{
				if (tempValue->n > tempValue1->n)
				{
					tempValue1->prev = tempValue->prev;
					tempValue->next = tempValue1->next;
					tempValue->prev = tempValue1;
					tempValue1->next = tempValue;
					if (tempValue1->prev == NULL)
					{
						tempValue->next->prev = tempValue;
						*list = tempValue1;
					}
					else
					{
						tempValue->next->prev = tempValue;
						tempValue1->prev->next = tempValue1;
					}
					print_list(*list);
				}
				tempValue1 = tempValue;
				tempValue = tempValue->prev;
			}
		}
		tempValue = *list;
		index += 1;
		for (i = 0; index > i; i++)
		{
			tempValue = tempValue->next;
			tempValue1 = tempValue->next;
		}
	}
}