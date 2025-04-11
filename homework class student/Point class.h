#pragma once
#pragma once
//������� 2
//���������� ����� "�����".���������� ������� ���������� x, y, z � ���������� - ������ ������.���������� ������� - ����� ������ ��� ����� ������, ������ ������, ���������� ��������� ��� ������� � ���������� - ������, ���������� ���������� � ���� � �������� ������ �� �����.
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
