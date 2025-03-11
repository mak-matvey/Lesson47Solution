#include "test.h"

// base case
void test01() {
	int array[]{ -1, 2, -3, 4, -5, 6, -7, 8, -9, 10 };
	int size = 10;
	int expected = -4;
	print_test(array, size, expected, "test01");
}

// base case
void test02() {
	int array[]{ 3, -10, 2, -5, 1, 7 };
	int size = 6;
	int expected = -3;
	print_test(array, size, expected, "test02");
}

// one element is in the array
void test03() {
	int array[]{ 10 };
	int size = 1;
	int expected = 0;
	print_test(array, size, expected, "test03");
}

// wrong size
void test04() {
	int array[]{ 0 };
	int size = 0;
	int expected = 0;
	print_test(array, size, expected, "test04");
}

// wrong size
void test05() {
	int array[]{ 0 };
	int size = -1;
	int expected = 0;
	print_test(array, size, expected, "test05");
}

// max and min are close to each other 
void test06() {
	int array[]{ 5, -10, 1, 2, 8, -7 };
	int size = 6;
	int expected = 0;
	print_test(array, size, expected, "test06");
}

// min is at the beginning and the max is at the end of the array
void test07() {
	int array[]{ 1, 3, 2, 8, -10 };
	int size = 5;
	int expected = 13;
	print_test(array, size, expected, "test07");
}

// max is at the beginning and the min is at the end of the array
void test08() {
	int array[]{ -10, 3, 2, 8, -1 };
	int size = 5;
	int expected = 13;
	print_test(array, size, expected, "test08");
}

// max is at the beginning and the min is at the end of the array
void test09() {
	int array[]{ 10, 3, -2, 8, -1 };
	int size = 5;
	int expected = 9;
	print_test(array, size, expected, "test09");
}

// min is at the beginning and the max is at the end of the array
void test10() {
	int array[]{ 1, 3, 2, -8, 10 };
	int size = 5;
	int expected = -3;
	print_test(array, size, expected, "test10");
}

// all elements are equal in magnitude
void test11() {
	int array[]{ 5, -5, 5, -5 };
	int size = 4;
	int expected = 0;
	print_test(array, size, expected, "test11");
}

// all elements are negative
void test12() {
	int array[]{ -1, -5, -8, -2 };
	int size = 4;
	int expected = -5;
	print_test(array, size, expected, "test12");
}

// all elements are positive
void test13() {
	int array[]{ 1, 5, 8, 2 };
	int size = 4;
	int expected = 5;
	print_test(array, size, expected, "test13");
}

// base case with some min and max elements
void test14() {
	int array[]{ 3, -10, 2, 10, 1, 7, -1 };
	int size = 7;
	int expected = 12;
	print_test(array, size, expected, "test14");
}

// base case with some min and max elements
void test15() {
	int array[]{ 3, 10, 2, -10, 1, 7, -1 };
	int size = 7;
	int expected = -8;
	print_test(array, size, expected, "test15");
}