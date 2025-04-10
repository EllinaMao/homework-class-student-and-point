// homework class student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "class student.h"

using namespace std;
////Задание 1
//Реализуйте класс "Студент".Необходимо хранить в переменных - членах класса : ФИО, дату рождения, контактный телефон, город, страну, название учебного заведения, город и страну(где находится учебное заведение), номер группы.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к отдельным переменным - членам.
//
//Задание 2
//Реализуйте класс "Точка".Необходимо хранить координаты x, y, z в переменных - членах класса.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к переменным - членам, реализуйте сохранение в файл и загрузку данных из файла.


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