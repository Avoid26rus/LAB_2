#pragma once
#include "Header.h"
#include "functions.h"

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void bsort(route *A) {
	int n = N;
	do {
		int nn = 0;
		for (int j = 1; j < n; ++j)
			if (route::cmp(A[j - 1], A[j])) {
				route temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
				nn = j;
			}
		n = nn;
	} while (n);
}

//проверяем, является ли гласной
bool isAlpfa(char var) {
	switch (var) {
	case 'a':
		return true;
	case 'y':
		return true;
	case 'e':
		return true;
	case 'i':
		return true;
	case 'o':
		return true;
	case 'u':
		return true;
	default:
		return false;
	}
}