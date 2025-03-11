// Среднее арифметическое ненулевых элементов
// [The arithmetic mean of non - zero elements].
//
// Дан вектор целых чисел. Необходимо разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов вектора.

double calculate_arithmetical_mean_of_nonsero_elements(int* array, int size)
{

	if (size <= 0)
	{
		return 0;
	}

	int number_of_nonzero = size;
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		number_of_nonzero -= array[i] == 0 ? 1 : 0;
		sum += array[i];
	}

	if (number_of_nonzero == 0)
	{
		return 0;
	}

	return sum / (number_of_nonzero + 0.0);
}