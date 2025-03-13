// Сортировка из указанного промежутка
// [The Sort from the specified range]
//
// Дан вектор натуральных чисел. Необходимо разработать
// функцию(или программу), которая сортирует часть элементов
// заданного вектора в указанном диапазоне порядковых номеров
// либо по возрастанию, либо по убыванию.

#include "logic.h"

void sort_in_range(int* array, int size, int start, int end, bool type)
{
	if (start > end)
	{
		int t = start;
		start = end;
		end = t;
	}

	if (type == true)
	{
		for (int c = start; c < end ; c++)
		{
			for (int i = start; i < end; i++)
			{
				if (array[i] > array[i + 1])
				{
					int t = array[i];
					array[i] = array[i + 1];
					array[i + 1] = t;
				}
			}
		}
	}
	else
	{
		for (int c = start; c < end; c++)
		{
			for (int i = start; i < end; i++)
			{
				if (array[i] < array[i + 1])
				{
					int t = array[i];
					array[i] = array[i + 1];
					array[i + 1] = t;
				}
			}
		}
	}
}