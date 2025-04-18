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

student::student(const student& st)
	: group_number(st.group_number) {

	cout << "copy contructor" << endl;

	full_name = new char[strlen(st.full_name) + 1];
	strcpy_s(full_name, strlen(st.full_name) + 1, st.full_name);

	phonenumber = new char[strlen(st.phonenumber) + 1];
	strcpy_s(phonenumber, strlen(st.phonenumber) + 1, st.phonenumber);

	city = new char[strlen(st.city) + 1];
	strcpy_s(city, strlen(st.city) + 1, st.city);

	country = new char[strlen(st.country) + 1];
	strcpy_s(country, strlen(st.country) + 1, st.country);

	school = new char[strlen(st.school) + 1];
	strcpy_s(school, strlen(st.school) + 1, st.school);

	city_of_school = new char[strlen(st.city_of_school) + 1];
	strcpy_s(city_of_school, strlen(st.city_of_school) + 1, st.city_of_school);

	country_of_school = new char[strlen(st.country_of_school) + 1];
	strcpy_s(country_of_school, strlen(st.country_of_school) + 1, st.country_of_school);
}

student& student::operator=(const student& obj)  
{  

	cout << "operator =" << endl;

   if (this == &obj)  
   {  
       return *this;  
   }  

   if (phonenumber) { delete[] phonenumber; }  
   if (full_name) { delete[] full_name; }  
   if (city) { delete[] city; }  
   if (country) { delete[] country; }  
   if (school) { delete[] school; }  
   if (city_of_school) { delete[] city_of_school; }  
   if (country_of_school) { delete[] country_of_school; }  

   group_number = obj.group_number;  

   phonenumber = new char[strlen(obj.phonenumber) + 1];  
   strcpy_s(phonenumber, strlen(obj.phonenumber) + 1, obj.phonenumber);  

   full_name = new char[strlen(obj.full_name) + 1];  
   strcpy_s(full_name, strlen(obj.full_name) + 1, obj.full_name);  

   city = new char[strlen(obj.city) + 1];  
   strcpy_s(city, strlen(obj.city) + 1, obj.city);  

   country = new char[strlen(obj.country) + 1];  
   strcpy_s(country, strlen(obj.country) + 1, obj.country);  

   school = new char[strlen(obj.school) + 1];  
   strcpy_s(school, strlen(obj.school) + 1, obj.school);  

   city_of_school = new char[strlen(obj.city_of_school) + 1];  
   strcpy_s(city_of_school, strlen(obj.city_of_school) + 1, obj.city_of_school);  

   country_of_school = new char[strlen(obj.country_of_school) + 1];  
   strcpy_s(country_of_school, strlen(obj.country_of_school) + 1, obj.country_of_school);  

   return *this;  
}
	

student::student(student&& st)

	: group_number(st.group_number),
	phonenumber(st.phonenumber),
	full_name(st.full_name),
	city(st.city),
	country(st.country),
	school(st.school),
	city_of_school(st.city_of_school),
	country_of_school(st.country_of_school) 
{
	cout << "move constuctor" << endl;

	st.full_name = nullptr;
	st.phonenumber = nullptr;
	st.city = nullptr;
	st.country = nullptr;
	st.school = nullptr;
	st.city_of_school = nullptr;
	st.country_of_school = nullptr;
}


student& student::operator=(student&& st)  
{  
	if (this == &st)
	{
		cout << "Both classes are equal" << endl;
		return *this;
	}

	cout << "move" << endl;

	if (phonenumber) { delete[] phonenumber; }
	if (full_name) { delete[] full_name; }
	if (city) { delete[] city; }
	if (country) { delete[] country; }
	if (school) { delete[] school; }
	if (city_of_school) { delete[] city_of_school; }
	if (country_of_school) { delete[] country_of_school; }

	group_number = st.group_number;  
	phonenumber = st.phonenumber;  
	full_name = st.full_name;  
	city = st.city;  
	country = st.country;  
	school = st.school;  
	city_of_school = st.city_of_school;  
	country_of_school = st.country_of_school;  

	st.phonenumber = nullptr;  
	st.full_name = nullptr;  
	st.city = nullptr;  
	st.country = nullptr;  
	st.school = nullptr;  
	st.city_of_school = nullptr;  
	st.country_of_school = nullptr;  
 
	return *this;  
}

short student::InputNumber()
{
	short temp = 0;
	cin >> temp;

	if (temp < 0) {
		temp = abs(temp);
	}

	Cinfail();
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
	Cinfail();

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
		Cinfail();

		size_t inputSize = strlen(temp);

		if (inputSize == phonesize || inputSize == shortphonesize) {
			return temp;
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

//istream& operator>>(istream& is, student& obj)
//{
//	cout << "Enter your name" << endl;
//	is >> obj.full_name;
//	Cinfail();
//	cout << "Enter your group number" << endl;
//	is >> obj.group_number;
//	Cinfail();
//	cout << "Enter your phone number" << endl;
//	is >> obj.phonenumber;
//	Cinfail();
//	cout << "Enter your city" << endl;
//	is >> obj.city;
//	Cinfail();
//	cout << "Enter your country" << endl;
//	is >> obj.country;
//	Cinfail();
//	cout << "Enter your school" << endl;
//	is >> obj.school;
//	Cinfail();
//	cout << "Enter your city of school" << endl;
//	is >> obj.city_of_school;
//	Cinfail();
//	cout << "Enter your country of school" << endl;
//	is >> obj.country_of_school;
//	Cinfail();
//
//	return is;
//}


// i already have functions for this and i REALLY like them. They work great, have a lot of checks and i want to use them instead..
istream& operator>>(istream& is, student& obj)
{
	cout << "istream" << endl;
	obj.SetFullName();
	obj.SetGroupNumber();
	obj.SetPhoneNumber();
	obj.SetCity();
	obj.SetCountry();
	obj.SetSchool();
	obj.SetCityOfSchool();
	obj.SetCountryOfSchool();

	return is;
}

ostream& operator<<(ostream& os, const student& obj)
{
	cout << "Ostream" << endl;
	os << "---------------------------------------" << endl
		<< "Name: " << obj.GetFullName() << endl
		<< "Group: " << obj.GetGroupNumber() << endl
		<< "Phone Number: " << obj.GetPhoneNumber() << endl
		<< "City: " << obj.GetCity() << endl
		<< "Country: " << obj.GetCountry() << endl
		<< "School: " << obj.GetSchool() << endl
		<< "City of School: " << obj.GetCityOfSchool() << endl
		<< "Country of School: " << obj.GetCountryOfSchool() << endl
		<< "---------------------------------------" << endl;


	return os;
}

void Cinfail() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}