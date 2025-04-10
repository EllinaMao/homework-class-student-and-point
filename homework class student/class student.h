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
	
	void SetAllFields();
	void SetGroupNumber();
	void SetPhoneNumber();
	void SetFullName();
	void SetCity();
	void SetCountry();
	void SetSchool();
	void SetCityOfSchool();
	void SetCountryOfSchool();


	const short GetGroupNumber()const;
	const char* GetPhoneNumber()const;
	const char* GetFullName()const;
	const char* GetCity()const;
	const char* GetCountry()const;
	const char* GetSchool()const;
	const char* GetCityOfSchool()const;
	const char* GetCountryOfSchool()const;


	void PrintStudent() const;









};

