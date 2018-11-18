#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstring>
#pragma warning (disable : 4996)
#define N 3
using namespace std;

class route
{
private:
	char point_A[40];
	char point_B[40];
	int number;

public:
	route() {};
	friend ostream& operator <<(ostream& out, const route op2) {
		out << "Пункт А: " << op2.point_A << endl;
		out << "Пункт B: " << op2.point_B << endl;
		out << "Номер маршрута: " << op2.number << endl;
		return out;
	}

	friend istream& operator >>(istream& in, route &op2) {
		cout << "Веведите название пункта А -> ";
		in >> op2.point_A;
		cout << "Веведите название пункта B -> ";
		in >> op2.point_B;
		cout << "Веведите номер маршрута -> ";
		in >> op2.number;
		cout << endl;
		return in;
	}

	void set_point_A() { cin >> point_A; }
	void set_point_B() { cin >> point_B; }
	void num() { cin >> number; }

	char* get_point_A() { return point_A; }
	char* get_point_B() { return point_B; }
	int get_number() { return number; }

	static bool cmp(const route& a, const route& b)
	{
		return (a.number > b.number);
	}
	
	~route() {};
};

void bsort(route *A) {
	int n = N;
	do {
		int nn = 0;
		for (int j = 1; j < n; ++j)
			if (route::cmp(A[j-1], A[j])) {
				route temp = A[j - 1];
				A[j - 1] = A[j];
				A[j] = temp;
				nn = j;
			}
		n = nn;
	} while (n);
}

int main()
{
	setlocale(LC_ALL, "Russian");
	route *temp = new route[N];
	int n;
	bool FLAG = true;

	cout << "Введите данные о маршрутах: " << endl;

	for (int i = 0; i < N; i++)
		cin >> temp[i];

	bsort(temp);

	cout << "Информация о всех маршрутах: " << endl;
	for (int i = 0; i < N; i++)
		cout << temp[i];

	cout << "Введите номер маршрута для поиска: " << endl;
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
		cout << "По данному маршруту ничего не найдено!" << endl;
	}


	delete[] temp;
	system("pause");
	return -1;
}