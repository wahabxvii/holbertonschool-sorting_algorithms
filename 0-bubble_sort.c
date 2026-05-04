#include "sort.h"

/**
* swap - Swaps two integers
*
* @array: Array of integers to be swaped
* @i: Given integer
* @j: Given integer
*
* Return: Void
*/
void swap(int *array, int i, int j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}

/**
* bubble_sort - Sorts an array of integers in
* ascending order using the Bubble sort
*
* @array: Array of integers to be sorted
* @size: Size of the array
*
* Return: Void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
