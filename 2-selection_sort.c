#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;
    int tmp;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;

        /* Find the minimum element in the unsorted part */
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        /* Swap only if the minimum is not already in place */
        if (min_idx != i)
        {
            tmp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = tmp;

            print_array(array, size);
        }
    }
}
