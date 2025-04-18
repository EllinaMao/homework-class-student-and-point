#pragma once
/*
Реализуйте класс "Студент". Необходимо хранить в переменных-членах класса: ФИО, дату рождения, контактный телефон, город, страну, название учебного заведения, город и страну (где находится учебное заведение), номер группы. Реализуйте функции-члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к отдельным переменным-членам.
*/

#include <iostream>
using namespace std;

class student {

private:
	short group_number;
	char* phonenumber;
	char* full_name;
	char* city;
	char* country;
	char* school;
	char* city_of_school;
	char* country_of_school;

	
	void InputStringField(char*& field, const char* prompt);
	char* InputPhoneNumber();
	short InputNumber();

public:
	student();
	student(short gn, const char* fn, const char* ph, const char* ct, const char* country, const char* sc, const char* ct_sc, const char* country_st);
	~student();
	student(const student& other);
	student& operator= (const student&obj);//copy

	//move
	student(student&& other); //move
	student& operator= (student&& obj);//move


	//Setters
	void SetAllFields();
	void SetGroupNumber();
	void SetPhoneNumber();
	void SetFullName();
	void SetCity();
	void SetCountry();
	void SetSchool();
	void SetCityOfSchool();
	void SetCountryOfSchool();

	//Getters
	short GetGroupNumber()const {return group_number;};
	const char* GetPhoneNumber()const { return phonenumber; };
	const char* GetFullName()const { return full_name; };
	const char* GetCity()const { return city; };
	const char* GetCountry()const { return country; };
	const char* GetSchool()const { return school; };
	const char* GetCityOfSchool()const { return city_of_school; };
	const char* GetCountryOfSchool()const { return country_of_school; };


	void PrintStudent() const;

	friend istream& operator>>(istream& is, student& obj);
	friend ostream& operator<<(ostream& os, const student& obj);
};


ostream& operator<<(ostream& os, const student& obj);	
void Cinfail();