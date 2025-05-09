#pragma once
#include <iostream>
#include <string>

using namespace std;

/*
Задание 2
Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украины.

С помощью механизма наследования, реализуйте класс ForeignPassport (загран.паспорт) производный от Passport.

Напомним, что заграничный паспорт содержит помимо паспортных данных, также данные о визах, номер заграничного паспорта.

*/

class Passport {

private:
    string mFullName;
    string mDateOfBirth;
    string mCitizenship;
    string mIssueDate;
    string mExpirationDate;

public:
    // Конструктор по умолчанию
    Passport()
        : mFullName("Unknown"), mDateOfBirth("Unknown"),
        mCitizenship("Unknown"), mIssueDate("Unknown"), mExpirationDate("Unknown") {
    }

    // Конструктор с параметрами
    Passport(const string& fullName, const string& dateOfBirth, const string& citizenship,
        const string& issueDate, const string& expirationDate)
        : mFullName(fullName), mDateOfBirth(dateOfBirth),
        mCitizenship(citizenship), mIssueDate(issueDate), mExpirationDate(expirationDate) {
    }

    // Геттеры и сеттеры
    string getFullName() const { return mFullName; }
    void setFullName(const string& fullName) {mFullName = fullName; }

    string getDateOfBirth() const { return mDateOfBirth; }
    void setDateOfBirth(const string& dateOfBirth) {mDateOfBirth = dateOfBirth; }

    string getIssueDate() const { return mIssueDate; }
    void setIssueDate(const string& issueDate) { this->mIssueDate = issueDate; }

    string getExpirationDate() const { return mExpirationDate; }
    void setExpirationDate(const string& expirationDate) { this->mExpirationDate = expirationDate; }

    string getCitizenship() const { return mCitizenship; }
    void setCitizenship(const string& citizenship) { this->mCitizenship = citizenship; }
};
