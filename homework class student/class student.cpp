#include "class student.h"

void student::SetAllFields()  
{  
   SetGroupNumber();  
   SetPhoneNumber();  
   SetFullName();  
   SetCity();  
   SetCountry();  
   SetSchool();  
   SetCityOfSchool();  
   SetCountryOfSchool();  
}

student::student()
{
	group_number = 0;
	phonenumber = new char [8] {"Unknown"};
	full_name = new char [8] {"Unknown"};
	city = new char [8] {"Unknown"};
	country = new char [8] {"Unknown"};
	school = new char [8] {"Unknown"};
	city_of_school = new char [8] {"Unknown"};
	country_of_school = new char [8] {"Unknown"};
}

student::student(short gn, const char* fn, const char* ph, const char* ct, const char* countr, const char* sc, const char* ct_sc, const char* country_st)  
{  
   group_number = gn;  

   phonenumber = new char[strlen(ph) + 1];  
   strcpy_s(phonenumber, strlen(ph) + 1, ph);  

   full_name = new char[strlen(fn) + 1];  
   strcpy_s(full_name, strlen(fn) + 1, fn);  

   city = new char[strlen(ct) + 1];  
   strcpy_s(city, strlen(ct) + 1, ct);  

   country = new char[strlen(countr) + 1];  
   strcpy_s(country, strlen(countr) + 1, countr);  

   school = new char[strlen(sc) + 1];  
   strcpy_s(school, strlen(sc) + 1, sc);  

   city_of_school = new char[strlen(ct_sc) + 1];  
   strcpy_s(city_of_school, strlen(ct_sc) + 1, ct_sc);  

   country_of_school = new char[strlen(country_st) + 1];  
   strcpy_s(country_of_school, strlen(country_st) + 1, country_st);  
}

student::~student()
{
	if (phonenumber) {
		delete[] phonenumber;
	}
	if (full_name) {
		delete[] full_name;
	}
	if (city) {
		delete[] city;
	}
	if (country) {
		delete[] country;
	}
	if (school) {
		delete[] school;
	}

	if (city_of_school) {
		delete[] city_of_school;
	}
	if (country_of_school) {
		delete[] country_of_school;
	}

}

short student::InputNumber()
{
	short temp = 0;
	cin >> temp;

	if (temp < 0) {
		temp = abs(temp);
	}

	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return temp;
}

void student::InputStringField(char*& field, const char* prompt)
{
	if (field) {
		delete[] field;
	}
	short tempsize = 50;
	char* temp = new char[tempsize];

	cout << prompt << endl;
	cin.getline(temp, tempsize);
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	field = new char[strlen(temp) + 1];
	strcpy_s(field, (strlen(temp) + 1), temp);

	if (field[0] != '\0') {
		field[0] = toupper(field[0]);
	}

	for (size_t i = 1; i < strlen(field); ++i) {
		field[i] = tolower(field[i]);
	}

	delete[] temp;
}

char* student::InputPhoneNumber()
{
	short phonesize = 13;
	short shortphonesize = 10;
	short tempsize = 50;

	char* temp = new char[tempsize];
	while (true) {
		cout << "Enter phone number: " << endl;
		cin.getline(temp, tempsize);
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

		size_t inputSize = strlen(temp);

		if (inputSize == phonesize || inputSize == shortphonesize) {
			return temp; // Возвращаем введённый номер
		}
		else {
			cout << "Wrong number, try again" << endl;
		}
	}
}
void student::SetGroupNumber()
{
	cout << "Enter group number: " << endl;
	group_number = InputNumber();
}

void student::SetPhoneNumber()
{
	if (phonenumber) {
		delete[] phonenumber;
	}

	char* temp = InputPhoneNumber();
	short phonesize = 13;
	short shortphonesize = 10;

	size_t inputSize = strlen(temp);

	if (inputSize == phonesize) {
		phonenumber = new char[phonesize + 1];
		strcpy_s(phonenumber, (phonesize + 1), temp);
	}
	else if (inputSize == shortphonesize) {
		phonenumber = new char[phonesize + 1];
		phonenumber[0] = '+';
		phonenumber[1] = '3';
		phonenumber[2] = '8';
		for (int i = 0; i < shortphonesize; ++i) {
			phonenumber[i + 3] = temp[i];
		}
		phonenumber[phonesize] = '\0'; // Null-terminate the string
	}

	delete[] temp; // Освобождаем временную память
}

void student::SetFullName()
{
	InputStringField(full_name, "Enter full name of student: ");
}
void student::SetCity()
{
	InputStringField(city, "Enter city: ");
}

void student::SetCountry()
{
	InputStringField(country, "Enter county: ");
}

void student::SetSchool()
{
	InputStringField(school, "Enter school: ");
}

void student::SetCityOfSchool()
{
	InputStringField(city_of_school, "Enter the city where the school is located: ");
}

void student::SetCountryOfSchool()
{
	InputStringField(country_of_school, "Enter the country where the school is located: ");
}

const short student::GetGroupNumber() const
{
	return group_number;
}

const char* student::GetPhoneNumber() const
{
	return phonenumber;
}

const char* student::GetFullName() const
{
	return full_name;
}

const char* student::GetCity() const
{
	return city;
}

const char* student::GetCountry() const
{
	return country;
}

const char* student::GetSchool() const
{
	return school;
}

const char* student::GetCityOfSchool() const
{
	return city_of_school;
}

const char* student::GetCountryOfSchool() const
{
	return country_of_school;
}

void student::PrintStudent() const
{
	cout << "Full Name: " << full_name << endl;
	cout << "Group Number: " << group_number << endl;
	cout << "Phone Number: " << phonenumber << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "School: " << school << endl;
	cout << "City of School: " << city_of_school << endl;
	cout << "Country of School: " << country_of_school << endl;
	cout << "----------------------------------------" << endl;

}
