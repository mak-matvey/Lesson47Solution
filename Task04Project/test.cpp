#include "test.h"

// base case
void test01() {
	int array[]{ -7, 2, 5, -4, -6, 11, 9 };
	int size = 7;
	int min_expected = 3;
	int max_expected = 2;
	print_test(array, size, min_expected, max_expected, "test01");
}

// base case with positive elements
void test02() {
	int array[]{ 12, 4, 5, 7, 15, 4, 16, 12, 13, 7 };
	int size = 10;
	int min_expected = 4;
	int max_expected = 4;
	print_test(array, size, min_expected, max_expected, "test02");
}

// only one element
void test03() {
	int array[]{ 10 };
	int size = 1;
	int min_expected = 0;
	int max_expected = 0;
	print_test(array, size, min_expected, max_expected, "test03");
}

// wrong size
void test04() {
	int array[]{ 0 };
	int size = 0;
	int min_expected = 0;
	int max_expected = 0;
	print_test(array, size, min_expected, max_expected, "test04");
}

// wrong size
void test05() {
	int array[]{ 0 };
	int size = -1;
	int min_expected = 0;
	int max_expected = 0;
	print_test(array, size, min_expected, max_expected, "test05");
}

// all elements are the same
void test06() {
	int array[]{ 1, 1, 1, 1, 1 };
	int size = 5;
	int min_expected = 0;
	int max_expected = 0;
	print_test(array, size, min_expected, max_expected, "test06");
}

// only three element
void test07() {
	int array[]{ 1, 2, 3 };
	int size = 3;
	int min_expected = 1;
	int max_expected = 1;
	print_test(array, size, min_expected, max_expected, "test07");
}

// only three element
void test08() {
	int array[]{ 1, 3, 2 };
	int size = 3;
	int min_expected = 2;
	int max_expected = 1;
	print_test(array, size, min_expected, max_expected, "test08");
}

// only three element
void test09() {
	int array[]{ 3, 1, 2 };
	int size = 3;
	int min_expected = 1;
	int max_expected = 2;
	print_test(array, size, min_expected, max_expected, "test09");
}

// only two element
void test10() {
	int array[]{ 5, 1 };
	int size = 2;
	int min_expected = 1;
	int max_expected = 1;
	print_test(array, size, min_expected, max_expected, "test10");
}

// all elements are equal in magnitude
void test11() {
	int array[]{ 5, -5, 5, -5 };
	int size = 4;
	int min_expected = 2;
	int max_expected = 2;
	print_test(array, size, min_expected, max_expected, "test11");
}

// all elements are negative
void test12() {
	int array[]{ -1, -5, -8, -2 };
	int size = 4;
	int min_expected = 1;
	int max_expected = 2;
	print_test(array, size, min_expected, max_expected, "test12");
}