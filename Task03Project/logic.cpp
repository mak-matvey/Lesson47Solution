// Среднее арифметическое неэкстремальных элементов
// [The arithmetic mean of non - extreme elements]
//
// Дан вектор натуральных чисел. Необходимо разработать 
// функцию, которая вычисляет среднее рифметическое элементов
// вектора без учета минимального и максимального элементов.

int find_max(int* array, int size)
{
	int max = array[0];

	for (int i = 1; i < size; i++)
	{
		max = array[i] > max ? array[i] : max;
	}

	return max;
}

int find_min(int* array, int size)
{
	int min = array[0];

	for (int i = 1; i < size; i++)
	{
		min = array[i] < min ? array[i] : min;
	}

	return min;
}

double calculate_arithmetical_mean_of_nonextreme_elements(int* array, int size)
{
	int max = find_max(array, size);
	int min = find_min(array, size);

	float sum = 0;
	int count = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (array[i] != max && array[i] != min) {
			sum += array[i];
			count++;
		}
	}

	return count > 0 ? sum / count : 0;
}