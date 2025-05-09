// homework class student.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "class student.h"
#include "Aspirant.h"
using namespace std;
/*
Наследование

Задание 1
Создайте класс Student, который будет содержать информацию о студенте.

С помощью механизма наследования, реализуйте класс Aspirant (аспирант - студент, который готовится к защите кандидатской работы) производный от Student.

Задание 2
Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.

С помощью механизма наследования, реализуйте класс ForeignPassport (загран.паспорт) производный от Passport.

Напомним, что заграничный паспорт содержит помимо паспортных данных, также данные о визах, номер заграничного паспорта.

Задание 3
Создать абстрактный базовый класс «Транспортное средство» и производные классы «Автомобиль», «Велосипед», «Повозка».

Подсчитать время и стоимость перевозки пассажиров и грузов каждым транспортным средством.




*/
int main()
{
    cout << "Task 1: student" << endl;

    // Создаем объект Passport на стеке
    Passport passport("Sasha Popova", "1990-01-01", "Ukrainian", "2010-01-01", "2030-01-01");

    // Передаем ссылку на объект Passport
    Aspirant aspirant(
        &passport,            
        101,                 
        "+380123456789",        
        "Kyiv National University", 
        "Artificial Intelligence",  
        "Dr. Smith",            
        2023                     
    );

    aspirant.PrintAspirant();

    return 0;
}