#pragma once
class route
{
private:
	char point_A[40];
	char point_B[40];
	int number;

public:
	route();

	friend ostream& operator <<(ostream& out, const route op2);
	friend istream& operator >>(istream& in, route &op2);

	void set_point_A();
	void set_point_B();
	void num();

	char* get_point_A();
	char* get_point_B();
	int get_number();

	static bool cmp(const route& a, const route& b);

	~route();
};