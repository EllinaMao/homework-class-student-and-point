// homework class student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "class student.h"
//#include "Point class.h"

using namespace std;
////Задание 1
//Реализуйте класс "Студент".Необходимо хранить в переменных - членах класса : ФИО, дату рождения, контактный телефон, город, страну, название учебного заведения, город и страну(где находится учебное заведение), номер группы.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к отдельным переменным - членам.
//
//Задание 2
//Реализуйте класс "Точка".Необходимо хранить координаты x, y, z в переменных - членах класса.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к переменным - членам, реализуйте сохранение в файл и загрузку данных из файла.


int main()
{
    cout << "Task 1:  student" << endl;
    /*
    //student student;
    student student(101, "Natalia Ivanova", "+123456789", "Odessa", "Ukraine", "Kyiv University", "Kyiv", "Ukraine");
    //cout << "Entering data for student "<< endl;
    //student.SetAllFields(); 

    cout << "Displaying student:" << endl;
    student.PrintStudent();

    cout << "Changing city:" << endl;
    student.SetCity();

    cout << "Displaying student:" << endl;
    student.PrintStudent();
    */


    student student1(101, "Oksana Popkova", "+123456789", "Odessa", "Ukraine", "Step University", "Odessa", "Ukraine");
    cout << "Displaying student1:" << endl;
    student1.PrintStudent();

    cout << "Creating student2 using copy constructor:" << endl;
    student student2(student1);
    student2.PrintStudent();

    cout << "Assigning student1 to student3 using copy assignment operator:" << endl;
    student student3;
    student3 = student1;
    student3.PrintStudent();

    cout << "Creating student4 using move constructor:" << endl;
    student student4(move(student1));
    student4.PrintStudent();


    cout << "Assigning student4 to student5 using move assignment operator:" << endl;
    student student5;
    student5 = std::move(student4);
    student5.PrintStudent();


    cout << "Enter data for student6 using input operator:" << endl;
    student student6;
    cin >> student6;

    cout << "Displaying student6 using output operator:" << endl;
    cout << student6;


    ////////////////////////

    //cout << "task2" << endl;

    //Point point;

    //cout << "Displaying point1:" << endl;
    //point.Output();
    //Point point2(1, 2, 5);
    //cout << "Displaying point2:" << endl;
    //point2.Output();

    //point2.SaveInFile();
    //point.LoadFromFile();

    //cout << "Displaying point1:" << endl;
    //point.Output();



    return 0;
}