#include "sort.h"
/**
 * bubble_sort - sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * Done by Abubakarr Bangura
 * @array: the poiter to the array
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
int tmp = 0;
if (!array)
{
return;
}
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - 1 - i; j++)
{
if (array[j + 1] < array[j])
{
tmp = array[j + 1];
array[j + 1] = array[j];
array[j] = tmp;
print_array(array, size);
}
}
}
}
