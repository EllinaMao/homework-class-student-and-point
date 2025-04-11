#pragma once
#pragma once
//Задание 2
//Реализуйте класс "Точка".Необходимо хранить координаты x, y, z в переменных - членах класса.Реализуйте функции - члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к переменным - членам, реализуйте сохранение в файл и загрузку данных из файла.
#include <iostream>
using namespace std;

class Point {
private:

	int x;
	int y;
	int z;

	static int count;

public:
	~Point();

	Point();
	Point(int x1);
	Point(int x1, int y1);
	Point(int x1, int y1, int z1);

	void Output()const;
	int GetX()const;
	int GetY()const;
	int GetZ()const;

	void SetX(int x1);
	void SetY(int y1);
	void SetZ(int z1);

	static int  GetCount();

	void SaveInFile();
	void LoadFromFile();
};
