#include "test.h"

// base case
void test01() {
	int array[]{ 1, 0, 2, 0, 3 };
	int size = 5;
	double expected = 2;
	print_test(array, size, expected, "test01");
}

// all elements are non-zero (positive)
void test02() {
	int array[]{ 4, 5, 6, 7, 8, 9 };
	int size = 6;
	double expected = 6.5;
	print_test(array, size, expected, "test02");
}

// all elements are zero
void test03() {
	const int SIZE = 5;
	int array[SIZE]{};
	double expected = 0;
	print_test(array, SIZE, expected, "test03");
}

// wrong size
void test04() {
	int array[]{ 0 };
	int size = 0;
	double expected = 0;
	print_test(array, size, expected, "test04");
}

// wrong size
void test05() {
	int array[]{ 0 };
	int size = -1;
	double expected = 0;
	print_test(array, size, expected, "test05");
}

// all elements are non-zero (negative)
void test06() {
	int array[]{ -2, -3, -4, -5};
	int size = 4;
	double expected = -3.5;
	print_test(array, size, expected, "test06");
}

// all elements are non-zero (negative and positive)
void test07() {
	int array[]{ 1, -2, 3, -4, 5, -6};
	int size = 6;
	double expected = -0.5;
	print_test(array, size, expected, "test07");
}

// only one non-zero element
void test08() {
	int array[]{ 7 };
	int size = 1;
	double expected = 7;
	print_test(array, size, expected, "test08");
}

// only one zero element
void test09() {
	int array[]{ 0 };
	int size = 1;
	double expected = 0;
	print_test(array, size, expected, "test09");
}