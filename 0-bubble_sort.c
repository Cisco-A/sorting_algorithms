#include <stdio.h>
#include <stdlib.h>

/**
 * bubble_sort - sort an arrray of integer in ascending order using Bubble sort
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: Null
 */

void bubble_sort(int *array, size_t size)
{
	int empty;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				empty = array[j + 1];
				array[j + 1] = array[j];
				array[j] = empty;
			}
		}
	}

	return (array);

}
