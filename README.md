# C - Sorting Algorithms

<!--toc:start-->
- [C - Sorting Algorithms](#c-sorting-algorithms)
  - [Description📚](#description📚)
  - [Files content📁](#files-content📁)
  - [Compilation](#compilation)
  - [Example](#example)
  - [Tasks📃](#tasks📃)
<!--toc:end-->

---

## Description📚

In this project we implement various sorting algorithms in C
and analyze their Big O notation.

The goal is to understand:

- At least four different sorting algorithms
- What is the Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What is a stable sorting algorithm

---

## Files content📁

Files description:

|File|Description|
|----|-----------|
|`sort_h`|Header file with function prototypes|
|`print_array.c`|Function to print arrays|
|`print_list.c`|Function to print lists|
|`0-bubble_sort.c`|Bubble sort implementation|
|`0-O`|Big O notation of bubble sort algorithm|
|`1-insertion_sort_list.c`|Insertion sort implementation|
|`1-O`|Big O notation of Insertion sort algorithm|
|`2-selection_sort.c`|Selection sort implementation|
|`2-O`|Big O notation of selection sort algorithm|
|`3-quick_sort.c`|Quick sort implementation|
|`3-O`|Big O notation of quick sort algorithm|

Function prototypes:

|Function|Prototype|
|--------|---------|
|`print_array`|`void print_array(const int *array, size_t size);`|
|`print_list`|`void print_list(const listint_t *list);`|
|`bubble_sort`|`void bubble_sort(int *array, size_t size);`|
|`insertion_sort_list`|`void insertion_sort_list(listint_t **list);`|
|`selection_sort`|`void selection_sort(int *array, size_t size);`|
|`quick_sort`|`void quick_sort(int *array, size_t size);`|

Data Structure:

```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

---

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -o file_name
```

---

## Example

```
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
```

---

## Tasks📃

- **0. Bubble sort**

 - Write a function that sorts an array of integers
 in ascending order using the Bubble sort algorithm

 - Write in the file 0-O, the big O notations of the time complexity
 of the Bubble sort algorithm, with 1notation per line:

    -in the best case
    -in the average case
    -in the worst case

- **1. Insertion sort**

 - Write a function that sorts a doubly linked list of integers in
 ascending order using the Insertion sort algorithm

 - Write in the file 1-O, the big O notations of the time complexity
 of the Insertion sort algorithm, with 1 notation per line:

    -in the best case
    -in the average case
    -in the worst case

- **2. Selection sort**

 - Write a function that sorts an array of integers
 in ascending order using the Selection sort algorithm


 - Write in the file 2-O, the big O notations of the time complexity of
 the Selection sort algorithm, with 1 notation per line:

    -in the best case
    -in the average case
    -in the worst case

- **3. Quick sort**

 - Write a function that sorts an array of integers in ascending order
 using the Quick sort algorithm


 - Write in the file 3-O, the big O notations of the time complexity of
 the Quick sort algorithm, with 1 notation per line:

    -in the best case
    -in the average case
    -in the worst case

---

## Authors

Created by:
 * Rahaf Alabdullah
 * Abdulwahab Almatrudi
