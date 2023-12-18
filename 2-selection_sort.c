#include "sort.h"

/**
 * selection_sort - function that sorts an array using selection sort alg
 * @array: array to be sorted
 * @size: size of array to be sorted
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_index;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_index] > array[j])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
		}
	}
}
