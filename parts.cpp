#pragma once
#include "Header.h"
#include "functions.h"
#include "route.h"
#include "parts.h"

inline void first_part()
{
	setlocale(LC_ALL, "Russian");
	route *temp = new route[N];
	int n;
	bool FLAG = true;

	cout << "������� ������ � ���������:         " << endl;
	for (int i = 0; i < N; i++)
		cin >> temp[i];

	bsort(temp);

	cout << "���������� � ���� ���������: " << endl;
	for (int i = 0; i < N; i++)
		cout << temp[i];

	cout << "������� ����� �������� ��� ������: " << endl;
	cin >> n;
	for (int i = 0; i < N; i++)
	{
		if (n == temp[i].get_number())
		{
			cout << temp[i];
			FLAG = false;
		}
	}
	if (FLAG)
	{
		cout << "�� ������� �������� ������ �� �������!" << endl;
	}

	delete[] temp;
	system("pause");
}

inline void second_part() {
	setlocale(LC_ALL, "Russian");
	ifstream in;
	try
	{
		in.open("input.txt");
		if (!in.is_open()) {
			throw 505;
		}
		char word[40];//������
		while (in >> word) {//��������� �� �����������
							//��������� �� ���������
			if (strlen(word) > 0 && isAlpfa(word[0]) && isAlpfa(word[strlen(word) - 1])) {
				cout << word << ' ';
			}
		}
		in.close();//��������� ����
	}
	catch (const int &ex)
	{
		cout << "������ �������� �����!" << endl << "��� ������: #" << ex << endl;
	}
	system("pause");
}