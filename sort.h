#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @previous: Pointer to the previousious element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *previous;
	struct listint_s *next;
} listint_t;


void bubble_sort(int *array, size_t size);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap_value(int *a, int *b);
void recursive_sort(int arr[], size_t size, int min, int max);
int partition(int arr[], size_t size, int low, int high);

#endif
