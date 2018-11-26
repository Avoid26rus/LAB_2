#pragma once
#include "Header.h"
#include "route.h"

route::route() { cout << "cnstr\r"; };
route::route(char *a, char *b, char *c) {
	strcpy(point_A, a);
	strcpy(point_B, b);
	strcpy(number, c);
}

ostream& operator <<(ostream& out, const route op2) {
	out << "Пункт А: " << op2.point_A << endl;
	out << "Пункт B: " << op2.point_B << endl;
	out << "Номер маршрута: " << op2.number << endl;
	return out;
}

istream& operator >>(istream& in, route &op2) {
	cout << "Веведите название пункта А -> ";
	in >> op2.point_A;
	cout << "Веведите название пункта B -> ";
	in >> op2.point_B;
	while (true) {
		try
		{
			cout << "Веведите номер маршрута -> ";
			in >> op2.number;
			for (int i = 0; i < strlen(op2.number); i++)
			{
				if (!isdigit(op2.number[i]))
					throw 7641;
			}
			break;
		}
		catch (const int &ex)
		{
			cout << "Ошибка при вводе данных!" << endl << "Код ошибки: #" << ex << endl << "Введите данные ещё раз:\t" << endl;
		}
	}
	cout << endl;
	return in;
}



void route::set_point_A() { cin >> point_A; }
void route::set_point_B() { cin >> point_B; }
void route::num() { cin >> number; }

char* route::get_point_A() { return point_A; }
char* route::get_point_B() { return point_B; }
char* route::get_number() {	return number; }

bool route::cmp(const route& a, const route& b)
{
	return (strcmp(a.number, b.number));
}

route::~route() { cout << "dstrctr\r"; }