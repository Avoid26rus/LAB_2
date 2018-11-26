#pragma once
#include "Header.h"
#include "route.h"
#include "functions.h"
#include "parts.h"

void first_part()
{
	setlocale(LC_ALL, "Russian");
	route *temp = new route[N];
	char n[10];
	char ttt[10];
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
		strcpy(ttt, temp[i].get_number());
		if (!strcmp(ttt, n))
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

void second_part() {
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
}