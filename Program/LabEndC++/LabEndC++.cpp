
//���� LabEndC++.cpp
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{	
	setlocale(LC_ALL, "rus"); // ���������� ����������� ���������
	int Numb; // ���������� ������ � switch
	double a,b; 

	cout << "������� ��� �����: " << endl;
	cin >> a; cin >> b;
	
		
	cout << "������� ����� ��������" << endl << "1 - ��������" << endl << "2 - ���������" << endl << "3 - �������" << endl << "4 - ���������" << endl;
	cin >> Numb;

	switch (Numb)
	{
	case 1: 
		{
			cout << "������� �������� ��������� � ������ ����������" << endl;
			break; 
		}
	case 2:
		{
			cout << "������� ��������� ��������� � ������ ����������" << endl;
			break; 
		}
	case 3:
		{
			cout << "������� ��������� ��������� � ������ ����������" << endl;
			break; 
		}
	case 4:
		{
			cout << "������� ������� ��������� � ������ ����������" << endl;
			break; 
		}

	}
	//cout << MySum(10, 3) << endl;
	//cout << MySub(10, 3) << endl;
	system("pause");
	return 0;
}