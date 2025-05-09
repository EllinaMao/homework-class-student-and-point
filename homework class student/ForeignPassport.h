#pragma once
#include <iostream>
#include <string>
#include "Passport.h"
using namespace std;

/*
Задание 2
Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.

С помощью механизма наследования, реализуйте класс ForeignPassport (загран.паспорт) производный от Passport.

Напомним, что заграничный паспорт содержит помимо паспортных данных, также данные о визах, номер заграничного паспорта.

*/

class ForeignPassport : public Passport {
private:
    Passport* BasePassport;
    string mForeignPassportNumber; 
    string* mVisas;             
    int mVisaCount;             
    int mVisaCapacity;                 

public:
    ForeignPassport();
    ForeignPassport(Passport* passport, const string& foreignPassportNumber);
    ForeignPassport(const string& fullName, const string& dateOfBirth, const string& citizenship,
        const string& issueDate, const string& expirationDate, const string& foreignPassportNumber);


    ~ForeignPassport();

    // Геттеры и сеттеры для номера заграничного паспорта
    string getForeignPassportNumber() const;
    void setForeignPassportNumber(const string& foreignPassportNumber);

    // Методы для работы с визами
    bool addVisa(const string& visa);  
    bool removeVisa(const string& visa); 
    void printVisas() const;         
};