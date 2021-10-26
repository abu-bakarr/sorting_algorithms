#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * swap_value - swap two elements of array
 * @first_element: first element
 * @second_element: second element
 *
 * Return: void function
 */


void swap_value(int *first_element, int *second_element)
{
	int temp = *first_element;
	*first_element = *second_element;
	*second_element = temp;
}


/**
 * partition - partitions array
 * @arr: Array of the integer list
 * @size: Size of the array
 * @lowest: lowest of array
 * @highest: highest of array
 * Return: void function
 */

int partition(int arr[], size_t size, int lowest, int highest)
{
	int pivot = arr[highest];
	int i = (lowest - 1), j;

	for (j = lowest; j <= highest - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap_value(&arr[i], &arr[j]);
			if (i != j)
				print_array(arr, size);
		}
	}
	i++;
	swap_value(&arr[i], &arr[highest]);
	if (i != j)
		print_array(arr, size);
	return (i);
}

/**
 * quick_sort - is a sorting algorithm
 * @array: Array of the integer list
 * @size: Size of the array
 *
 * Return: void function
 */

void quick_sort(int *array, size_t size)
{
	size_t start = 0;
	size_t end = size - 1;

	if (array != NULL || size > 1)
		recursive_sort(array, size, start, end);

}
/**
 * recursive_sort - recursive function for partition
 * @arr: Array of the integer list
 * @size: Size of the array
 * @minimum_value: value minimum Value
 * @maximum_value: value maximum value
 *
 * Return: void function
 */
void recursive_sort(int arr[], size_t size, int minimum_value, int maximum_value)
{
	int part;

	if (minimum_value < maximum_value)
	{
		part = partition(arr, size, minimum_value, maximum_value);

		recursive_sort(arr, size, minimum_value, part - 1);
		recursive_sort(arr, size, part + 1, maximum_value);
	}
}
