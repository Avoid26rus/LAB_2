#pragma once
#include "Header.h"
#include "route.h"

route::route() { cout << "cnstr\r"; };

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
	cout << "Веведите номер маршрута -> ";
	in >> op2.number;
	cout << endl;
	return in;
}

void route::set_point_A() { cin >> point_A; }
void route::set_point_B() { cin >> point_B; }
void route::num() { cin >> number; }

char* route::get_point_A() { return point_A; }
char* route::get_point_B() { return point_B; }
int route::get_number() { return number; }

bool route::cmp(const route& a, const route& b)
{
	return (a.number > b.number);
}

route::~route() { cout << "dstrctr\r"; }