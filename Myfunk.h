#pragma once

#include <iostream>
#include <ctime>
using namespace std;
void fill_array(int* mas, const int size, int left, int right) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % (right - left + 1) + left;
	}
}
void print_array(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << ' ';
	}
}
int sum_array(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	return sum;
}
int proizvedenie(int* mas, const int size) {
	int proizvedenie = 1;
	for (int i = 0; i < size; i++) {
		proizvedenie *= mas[i];
	}
	return proizvedenie;
}
double srednee_arifm(int* mas, const int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += mas[i];
	}
	return double(sum) / size;
}
int col_chet(int* mas, const int size) {
	int col = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 == 0) {
			col++;
		}
	}
	return col;
}
bool bol(int* mas, const int size, int x) {
	for (int i = 0; i < size; i++) {
		if (mas[i] == x) {
			return true;
		}

	}
	return false;
}
