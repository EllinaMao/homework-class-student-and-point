#include "class student.h"

// Конструктор по умолчанию
student::student()
    : StudentInfo(nullptr), mGroupNumber(0), mPhoneNumber("Unknown"), mSchool("Unknown") {
}

// Конструктор с параметрами
student::student(Passport* studentInfo, short groupNumber, const string& phoneNumber, const string& school)
    : StudentInfo(studentInfo), mGroupNumber(groupNumber), mPhoneNumber(phoneNumber), mSchool(school) {
}


// Копирующий конструктор
student::student(const student& other)
    : mGroupNumber(other.mGroupNumber), mPhoneNumber(other.mPhoneNumber), mSchool(other.mSchool) {
    // Создаем глубокую копию Passport
    if (other.StudentInfo) {
        StudentInfo = new Passport(*other.StudentInfo);
    } else {
        StudentInfo = nullptr;
    }
}

// Перемещающий конструктор
student::student(student&& other) noexcept
    : StudentInfo(other.StudentInfo), mGroupNumber(other.mGroupNumber),
      mPhoneNumber(std::move(other.mPhoneNumber)), mSchool(std::move(other.mSchool)) {
    // Обнуляем указатель в перемещенном объекте
    other.StudentInfo = nullptr;
}

// Геттеры
Passport* student::GetStudentInfo() const {
    return StudentInfo;
}

short student::GetGroupNumber() const {
    return mGroupNumber;
}

string student::GetPhoneNumber() const {
    return mPhoneNumber;
}

string student::GetSchool() const {
    return mSchool;
}

// Сеттеры
void student::SetStudentInfo(Passport* studentInfo) {

    StudentInfo = studentInfo;
}

void student::SetGroupNumber(short groupNumber) {
    mGroupNumber = groupNumber;
}

void student::SetPhoneNumber(const string& phoneNumber) {
    mPhoneNumber = phoneNumber;
}

void student::SetSchool(const string& school) {
    mSchool = school;
}

// Печать информации о студенте
void student::PrintStudent() const {
    cout << "Student Info: " << (StudentInfo ? StudentInfo->getFullName() : "No Passport Info") << endl;
    cout << "Group Number: " << mGroupNumber << endl;
    cout << "Phone Number: " << mPhoneNumber << endl;
    cout << "School: " << mSchool << endl;
}
