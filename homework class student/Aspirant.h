#pragma once
#include <iostream>
#include <string>
#include "class student.h"
using namespace std;
/*
Задание 1
Создайте класс Student, который будет содержать информацию о студенте.
С помощью механизма наследования, реализуйте класс Aspirant (аспирант - студент, который готовится к защите кандидатской работы) производный от Student.

*/

class Aspirant : public student {
private: 
    string thesisTopic;
    string scientificAdvisor;
    int admissionYear;

public:

    Aspirant()
        : student(), thesisTopic("Unknown"), scientificAdvisor("Unknown"), admissionYear(0) {
    }

    Aspirant(const string& thesisTopic, const string& scientificAdvisor, int admissionYear)
        : thesisTopic(thesisTopic), scientificAdvisor(scientificAdvisor), admissionYear(admissionYear)
    {
    }

    Aspirant(Passport* studentInfo, short groupNumber, const string& phoneNumber, const string& school,
        const string& thesis, const string& advisor, int year)
        : student(studentInfo, groupNumber, phoneNumber, school),
        thesisTopic(thesis), scientificAdvisor(advisor), admissionYear(year) {
    }

    Aspirant(const Aspirant& other) = default;

    ~Aspirant() = default;

    void SetThesisTopic(const string& topic) { thesisTopic = topic; }
    void SetScientificAdvisor(const string& advisor) { scientificAdvisor = advisor; }
    void SetAdmissionYear(int year) { admissionYear = year; }


    const string& GetThesisTopic() const { return thesisTopic; }
    const string& GetScientificAdvisor() const { return scientificAdvisor; }
    int GetAdmissionYear() const { return admissionYear; }


    void PrintAspirant() const {
        PrintStudent();
        cout << "Thesis Topic: " << thesisTopic
            << "\nScientific Advisor: " << scientificAdvisor
            << "\nAdmission Year: " << admissionYear << endl;
    }

    bool operator==(const Aspirant& other) const
    {
        return thesisTopic == other.thesisTopic && scientificAdvisor == other.scientificAdvisor && admissionYear == other.admissionYear;
    }

};
