// homework class student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "class student.h"
#include "Point class.h"

using namespace std;
////������� 1
//���������� ����� "�������".���������� ������� � ���������� - ������ ������ : ���, ���� ��������, ���������� �������, �����, ������, �������� �������� ���������, ����� � ������(��� ��������� ������� ���������), ����� ������.���������� ������� - ����� ������ ��� ����� ������, ������ ������, ���������� ��������� ��� ������� � ��������� ���������� - ������.
//
//������� 2
//���������� ����� "�����".���������� ������� ���������� x, y, z � ���������� - ������ ������.���������� ������� - ����� ������ ��� ����� ������, ������ ������, ���������� ��������� ��� ������� � ���������� - ������, ���������� ���������� � ���� � �������� ������ �� �����.


int main()
{
    cout << "task1 student" << endl;
    student student;

    cout << "Entering data for student "<< endl;
    student.SetAllFields(); 

    cout << "Displaying student:" << endl;
    student.PrintStudent();

    cout << "Changing city:" << endl;
    student.SetCity();

    cout << "Displaying student:" << endl;
    student.PrintStudent();

    ////////////////////////

    cout << "task2" << endl;

    Point point;

    cout << "Displaying point1:" << endl;
    point.Output();
    Point point2(1, 2, 5);
    cout << "Displaying point2:" << endl;
    point2.Output();

    point2.SaveInFile();
    point.LoadFromFile();

    cout << "Displaying point1:" << endl;
    point.Output();



    return 0;
}