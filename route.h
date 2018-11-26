#pragma once
class route
{
private:
	char point_A[40];
	char point_B[40];
	char number[10];
public:
	route();
	route(char *a, char *b, char *c);

	friend ostream& operator <<(ostream& out, const route op2);
	friend istream& operator >>(istream& in, route &op2);

	void set_point_A();
	void set_point_B();
	void num();

	char* get_point_A();
	char* get_point_B();
	char* get_number();

	static bool cmp(const route& a, const route& b);

	~route();
};