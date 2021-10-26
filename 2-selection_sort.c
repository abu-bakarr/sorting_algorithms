#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: the poiter to the array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i = 0, j = 0;
int tempValue, tempValue_2;
if (!array)
{
return;
}
for (i = 0; i < size - 1; i++)
{
tempValue = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[tempValue])
{
tempValue = j;
}
}
if (array[i] != array[tempValue])
{
tempValue_2 = array[i];
array[i] = array[tempValue];
array[tempValue] = tempValue_2;
print_array(array, size);
}
}
}
