// Количество локальных минимумов и максимумов
// [The Number of local minima and maxima]
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию, которая подсчитывает количество локальных минимумов 
// и максимумов.
#include "logic.h"

int count_local_max(int* array, int size)
{
	int count = 0;

	if (*(array) > *(array + 1) && size > 1)
	{
		count++;
	}

	if (*(array + size - 1) > * (array + size - 2) && size > 1)
	{
		count++;
	}

	for (int i = 1; i < size - 2; i++)
	{
		if (*(array + i) > *(array + i + 1) &&
			*(array + i) > *(array + i - 1))
		{
			count++;
		}
	}

	return count;
}

int count_local_min(int* array, int size)
{
	int count = 0;

	if (*(array) < * (array + size) && size > 1)
	{
		count++;
	}

	if (*(array + size - 1) < * (array + size - 2) && size > 1)
	{
		count++;
	}

	for (int i = 1; i < size - 2; i++)
	{
		if (*(array + i) < * (array + i + 1) &&
			*(array + i) < * (array + i - 1))
		{
			count++;
		}
	}

	return count;
}

void count_local_min_and_max(int* array, int size, int* min_count, int* max_count) {

	*min_count = count_local_min(array, size);
	*max_count = count_local_max(array, size);
}