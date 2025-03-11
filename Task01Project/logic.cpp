// Сумма элементов [The sum of elements]
//
// Необходимо разработать функцию, которая вычисляет 
// сумму элементов массива, расположенных между первыми
// максимальным по модулю и минимальным по модулю элементами.
#include "logic.h"

int get_module(int n)
{
	return n < 0 ? -n : n;
}

int find_i_min(int* array, int size)
{
	int index = 0;
		
	for (int i = 1; i < size; i++)
	{
		if (get_module(array[i]) < get_module(array[index]))
		{
			index = i;
		}
	}

	return index;
}

int find_i_max(int* array, int size)
{
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (get_module(array[i]) > get_module(array[index]))
		{
			index = i;
		}
	}

	return index;
}


int sum_between_first_min_max(int* array, int size)
{
	int i_min = find_i_min(array, size);
	int i_max = find_i_max(array, size);

	if (i_min < i_max)
	{
		int t = i_min;
		i_min = i_max;
		i_max = t;
	}

	int sum = 0;

	for (int i = i_max + 1; i < i_min; i++)
	{
		sum += array[i];
	}

	return sum;
}