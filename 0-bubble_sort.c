#include "sort.h"
/**
 *bubble_sort - function that implements the bubble sort algorithm
 *@array: array of numbers type int
 *@size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
unsigned int i = 0, j = 0, swap = 0;

if (size < 2)
{
return;
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap = array[j];
array[j] = array[j + 1];
array[j + 1] = swap;
print_array(array, size);
}
}
}
}
}
