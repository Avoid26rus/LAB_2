﻿#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

//проверяем, является ли гласной
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
	string word;//строка
	stringstream ss;
	while(in >> word){//считываем по предложению
		//проверяем на гласность
		if(word.size() > 0 && isAlpfa(word[0]) && isAlpfa(word[word.size()-1])){
			ss << word << ' ';//выводим в поток
		} 	
	}
	cout << ss.str();// выводим предложения
	in.close();//закрываем файл										   
	system("pause>>void");
}