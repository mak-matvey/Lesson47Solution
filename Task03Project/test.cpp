#include "test.h"

// base case with positive elements
void test01() {
	int array[]{ 1, 2, 3, 4};
	int size = 4;
	double expected = 2.5;
	print_test(array, size, expected, "test01");
}

// base case with negative elements
void test02() {
	int array[]{ -1, -2, -3, -4 };
	int size = 4;
	double expected = -2.5;
	print_test(array, size, expected, "test02");
}

// base case with positive and negative elements
void test03() {
	int array[]{-1, 2, -3, 4, -5, 6};
	int size = 6;
	double expected = 0.5;
	print_test(array, size, expected, "test03");
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

// only one element
void test06() {
	int array[]{ 1 };
	int size = 1;
	double expected = 0;
	print_test(array, size, expected, "test06");
}

// only two elements
void test07() {
	int array[]{ 1, 2};
	int size = 2;
	double expected = 0;
	print_test(array, size, expected, "test07");
}

// only three elements
void test08() {
	int array[]{ 1, 2, 3 };
	int size = 3;
	double expected = 2;
	print_test(array, size, expected, "test08");
}

// more than one extreme elements
void test09() {
	int array[]{ 1, 2, 5, 1, 4, 1, 5, 1, 5, 1 };
	int size = 10;
	double expected = 3;
	print_test(array, size, expected, "test09");
}

// more than one  max-elements
void test10() {
	int array[]{ 5, 1, 2, 5, 4, 5 };
	int size = 6;
	double expected = 3;
	print_test(array, size, expected, "test10");
}

// more than one  min-elements
void test11() {
	int array[]{ 5, 1, 4, 1, 2, 1 };
	int size = 6;
	double expected = 3;
	print_test(array, size, expected, "test11");
}

// only extreme elements
void test12() {
	int array[]{ 5, 1, 5, 1};
	int size = 4;
	double expected = 0;
	print_test(array, size, expected, "test12");
}