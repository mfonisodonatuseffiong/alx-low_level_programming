#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index where value is located, or -1 if value is not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;  // Changed from int to size_t for compatibility with size

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);  // Changed %u to %lu for size_t
        if (value == array[i])
            return ((int)i);  // Cast size_t to int
    }
    return (-1);
}
