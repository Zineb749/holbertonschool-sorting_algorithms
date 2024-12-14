#include <stdio.h>

/**
 * print_array - Prints the elements of an array.
 * @array: The array to be printed.
 * @size: The size of the array.
 */
void print_array(int *array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
