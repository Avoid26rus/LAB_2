#include "Header.h"
#include "route.h"
#include "functions.h"
#include "parts.h"

int main() {
	int tmp;
	while (1) {
		cout << "1 - First part of programm" << endl << "2 - Second part of programm" << endl;
		cin >> tmp;
		if (tmp == 1)
		{
			first_part();
		}
		else
		{
			second_part();
		}
		cout << endl << "Reply cycle?" << endl << "1 - Yes" << endl << "2 - No" << endl;
		cin >> tmp;
		if (tmp != 1)
			break;
	}
	return -1;
}