#include "test.h"

// type == true - sort by ascending
// type == false - sort by descending

// base case
void test01() {
	int size = 5;
	int start = 0;
	int end = size - 1;
	int type = true;
	int array[]{ 2, 4, 3, 5, 7 };
	int expected[]{ 2, 3, 4, 5, 7 };

	print_test(array, size, expected, start, end, type, "test01");
}

// base case
void test02() {
	int size = 5;
	int start = 0;
	int end = size - 1;
	int type = false;
	int array[]{ 2, 4, 3, 5, 7 };
	int expected[]{ 7, 5, 4, 3, 2 };

	print_test(array, size, expected, start, end, type, "test02");
}

// base case
void test03() {
	int size = 5;
	int start = size - 1;
	int end = 0;
	int type = true;
	int array[]{ 2, 4, 3, 5, 7 };
	int expected[]{ 2, 3, 4, 5, 7 };

	print_test(array, size, expected, start, end, type, "test03");
}

// base case
void test04() {
	int size = 5;
	int start = size - 1;
	int end = 0;
	int type = false;
	int array[]{ 2, 4, 3, 5, 7 };
	int expected[]{ 7, 5, 4, 3, 2 };

	print_test(array, size, expected, start, end, type, "test04");
}

// only three elements
void test05() {
	int size = 3;
	int start = 0;
	int end = size - 1;
	int type = false;
	int array[]{ 1, 2, 3 };
	int expected[]{ 3, 2, 1 };

	print_test(array, size, expected, start, end, type, "test05");
}

// only one element
void test06() {
	int size = 1;
	int start = 0;
	int end = 0;
	int type = false;
	int array[]{ 2 };
	int expected[]{ 2 };

	print_test(array, size, expected, start, end, type, "test06");
}

// only two elements
void test07() {
	int size = 2;
	int start = 0;
	int end = 1;
	int type = true;
	int array[]{ 2, 1 };
	int expected[]{ 1, 2 };

	print_test(array, size, expected, start, end, type, "test07");
}

// only two elements
void test08() {
	int size = 2;
	int start = 0;
	int end = 1;
	int type = false;
	int array[]{ 1, 2 };
	int expected[]{ 2, 1 };

	print_test(array, size, expected, start, end, type, "test08");
}

// base case
void test09() {
	int size = 5;
	int start = 1;
	int end = size - 1;
	int type = true;
	int array[]{ 4, 3, 5, 7, 2 };
	int expected[]{ 4, 2, 3, 5, 7 };

	print_test(array, size, expected, start, end, type, "test09");
}

// base case
void test10() {
	int size = 5;
	int start = 0;
	int end = size - 2;
	int type = true;
	int array[]{ 7, 2, 4, 3, 5 };
	int expected[]{ 2, 3, 4, 7, 5 };

	print_test(array, size, expected, start, end, type, "test10");
}

// base case
void test11() {
	int size = 5;
	int start = 1;
	int end = size - 2;
	int type = true;
	int array[]{ 4, 7, 3, 5, 2 };
	int expected[]{ 4, 3, 5, 7, 2 };

	print_test(array, size, expected, start, end, type, "test11");
}

// base case
void test12() {
	int size = 5;
	int start = 2;
	int end = size - 3;
	int type = true;
	int array[]{ 4, 3, 5, 7, 2 };
	int expected[]{ 4, 3, 5, 7, 2 };

	print_test(array, size, expected, start, end, type, "test12");
}

// base case
void test13() {
	int size = 5;
	int start = 2;
	int end = size - 2;
	int type = true;
	int array[]{ 4, 3, 7, 5, 2 };
	int expected[]{ 4, 3, 5, 7, 2 };

	print_test(array, size, expected, start, end, type, "test13");
}

// wrong size
void test14() {
	int size = 0;
	int start = size - 1;
	int end = 0;
	int type = false;
	int array[]{ 0 };
	int expected[]{ 0 };

	print_test(array, size, expected, start, end, type, "test14");
}

// wrong size
void test15() {
	int size = -1;
	int start = size - 1;
	int end = 0;
	int type = false;
	int array[]{ 0 };
	int expected[]{ 0 };

	print_test(array, size, expected, start, end, type, "test15");
}

// wrong start of range
void test16() {
	int size = 3;
	int start = -1;
	int end = 2;
	int type = false;
	int array[]{ 1, 3, 2 };
	int expected[]{ 1, 3, 2 };

	print_test(array, size, expected, start, end, type, "test16");
}

// wrong start of range
void test17() {
	int size = 3;
	int start = 3;
	int end = 2;
	int type = false;
	int array[]{ 1, 3, 2 };
	int expected[]{ 1, 3, 2 };

	print_test(array, size, expected, start, end, type, "test17");
}

// wrong start of range
void test18() {
	int size = 3;
	int start = 4;
	int end = 2;
	int type = false;
	int array[]{ 1, 3, 2 };
	int expected[]{ 1, 3, 2 };

	print_test(array, size, expected, start, end, type, "test18");
}

// wrong end of range
void test19() {
	int size = 3;
	int start = 0;
	int end = 3;
	int type = false;
	int array[]{ 1, 3, 2 };
	int expected[]{ 1, 3, 2 };

	print_test(array, size, expected, start, end, type, "test19");
}

// wrong end of range
void test20() {
	int size = 3;
	int start = 0;
	int end = -1;
	int type = false;
	int array[]{ 1, 3, 2 };
	int expected[]{ 1, 3, 2 };

	print_test(array, size, expected, start, end, type, "test20");
}

// wrong end of range
void test21() {
	int size = 3;
	int start = 0;
	int end = 4;
	int type = false;
	int array[]{ 1, 3, 2 };
	int expected[]{ 1, 3, 2 };

	print_test(array, size, expected, start, end, type, "test21");
}