// homework class student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "class student.h"

using namespace std;
////������� 1
//���������� ����� "�������".���������� ������� � ���������� - ������ ������ : ���, ���� ��������, ���������� �������, �����, ������, �������� �������� ���������, ����� � ������(��� ��������� ������� ���������), ����� ������.���������� ������� - ����� ������ ��� ����� ������, ������ ������, ���������� ��������� ��� ������� � ��������� ���������� - ������.
//
//������� 2
//���������� ����� "�����".���������� ������� ���������� x, y, z � ���������� - ������ ������.���������� ������� - ����� ������ ��� ����� ������, ������ ������, ���������� ��������� ��� ������� � ���������� - ������, ���������� ���������� � ���� � �������� ������ �� �����.


int main()
{
    cout << "task1" << endl;
    student student;

    cout << "Entering data for student "<< endl;
    student.SetAllFields(); 


    cout << "Displaying student:" << endl;
    student.PrintStudent();


















    return 0;
}