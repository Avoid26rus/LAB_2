#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//���������, �������� �� �������
bool isAlpfa(char var){
	switch(var){
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

int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//������
	stringstream ss;
	while(in >> word){//��������� �� �����������
		//��������� �� ���������
		if(word.size() > 0 && isAlpfa(word[0]) && isAlpfa(word[word.size()-1])){
			ss << word << ' ';//������� � �����
		} 	
	}
	cout << ss.str();// ������� �����������
	in.close();//��������� ����										   
	system("pause>>void");
}