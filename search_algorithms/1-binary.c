#include "search_algos.h"

/**
 * binary_search -  a function that searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: the index where value is located
 **/
int binary_search(int *array, size_t size, int value)
{
	int i, low = 0;
	int high = size - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i >= high)
				continue;
			else
				printf(", ");

		}
		printf("\n");

		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return (-1);
}
