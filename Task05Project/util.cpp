#include "util.h"

string convert(int* array, int size) {
	string s = "";
	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}
	return s;
}

void print_test(int* array, int size, int* expected, int start, int end, bool type, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	sort_in_range(array, size, start, end, type);

	bool result = true;

	for (int i = 0; i < size; i++)
	{
		if (array[i] != expected[i]) {
			result = false;
			break;
		}
	}
	
	SetConsoleTextAttribute(h, (0 | 15));
	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)";
		// background  color
		SetConsoleTextAttribute(h, (((2 << 4) | 15)));
	}
	else {
		msg = "FAIL(red)";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;
	SetConsoleTextAttribute(h, (0 | 15));

	if (!result) {
		cout << "Current array: " << convert(array, size) << endl;
		cout << "Expected array: " << convert(expected, size) << endl;
		cout << "Option: sort by " << (type ? "ascending" : "descending") 
			<< " in range between " << start << " and " << end << endl;
	}

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "---------------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
	//CloseHandle(h);
}

//https://ru.stackoverflow.com/questions/1141821/%D0%9A%D0%B0%D0%BA-%D0%B8%D0%B7%D0%BC%D0%B5%D0%BD%D0%B8%D1%82%D1%8C-%D1%86%D0%B2%D0%B5%D1%82-%D0%B4%D0%BB%D1%8F-%D0%BE%D0%BA%D0%BD%D0%B0-%D0%BA%D0%BE%D0%BD%D1%81%D0%BE%D0%BB%D0%B8-c
