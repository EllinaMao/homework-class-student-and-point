#pragma once
#include <iostream>
#include <string>
#include "Passport.h"
using namespace std;

class student {
private:
    Passport* StudentInfo;
    short mGroupNumber;
    string mPhoneNumber;
    string mSchool;

public:
    student();
    student(Passport* studentInfo, short groupNumber, const string& phoneNumber, const string& school);

    student(const student& other);
    student(student&& other) noexcept;

    // Getters
    Passport* GetStudentInfo() const;
    short GetGroupNumber() const;
    string GetPhoneNumber() const;
    string GetSchool() const;

    // Setters
    void SetStudentInfo(Passport* studentInfo);
    void SetGroupNumber(short groupNumber);
    void SetPhoneNumber(const string& phoneNumber);
    void SetSchool(const string& school);


    void PrintStudent() const;
};
