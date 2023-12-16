#include "sort.h"

/**
 * bubble_sort - Function that sort array using bubble sort
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp = 0;
	bool flag = true;

	if (array == NULL || size == 0)
		return;
	while (flag)
	{
		flag = false;
		for (i = 0; i < size - 1; i++)
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
