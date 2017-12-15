//файл LabEndC++.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Funcs.h" 
 
int main()
{	
	setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
	int Numb; // переменная выбора в switch
	double a,b; 

	cout << "Введите два числа: " << endl;
	cin >> a; cin >> b;
	
		
	cout << "Введите номер операции" << endl << "1 - Сложение" << endl << "2 - Вычитание" << endl << "3 - Умножение" << endl << "4 - Деление" << endl;
	cin >> Numb;

	switch (Numb)
	{
	case 1: 
		{
			//cout << "Функция сложения находится в стадии разработки" << endl;
			cout << MySum(a, b) << endl;
			break; 
		}
	case 2:
		{
			//cout << "Функция вычитания находится в стадии разработки" << endl;
			cout << MySub(a, b) << endl;
			break; 
		}
	case 3:
		{
			cout << MyMul(a, b) << endl;
			break; 
		}
	case 4:
		{
			cout << MyDiv(a, b) << endl;
			break; 
		}

	}
	//cout << MySum(10, 3) << endl;
	//cout << MySub(10, 3) << endl;
	system("pause");
	return 0;
}