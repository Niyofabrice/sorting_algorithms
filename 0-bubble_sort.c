#include "sort.h"

/**
 * bubble_sort - Function that sort array using bubble sort
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;
	bool flag = true;

	if (array == NULL || size == 0)
		return;
	while (flag)
	{
		flag = false;
		for (j = 0; j < size - 1; j++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				flag = true
			}
		}
	}
}
