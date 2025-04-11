#include "Point class.h"
int Point::count = 0;

Point::~Point()
{
	count--;
}

Point::Point()
{
    x = y = z = 0;
	count++;
}

Point::Point(int x1)
{
	x = x1;
	y = x;
	z = x;
	count++;
}

Point::Point(int x1, int y1) :Point(x1)
{
	y = y1;
}

Point::Point(int x1, int y1, int z1) :Point(x1, y1)
{
	z = z1;
}

void Point::Output() const
{
	cout << "X: " << x << "\tY: " << y << endl;
	cout << "Count: " << count << endl;
}

int Point::GetX() const
{
	return x;
}
int Point::GetY() const
{
	return y;
}
int Point::GetZ() const
{
	return z;
}

void Point::SetX(int x1)
{
	x = x1;
}

void Point::SetY(int y1)
{
	y = y1;
}

void Point::SetZ(int z1)
{
	z = z1;
}

int Point::GetCount()
{
	return count;
}

void Point::SaveInFile()
{
    FILE* file = nullptr;
    errno_t err = fopen_s(&file, "point_data.bin", "wb");
    if (err == 0 && file) {
        fwrite(this, sizeof(Point), 1, file);
        fclose(file);
        cout << "Data saved to file successfully." << endl;
    }
    else {
        cerr << "Error: Unable to open file for writing." << endl;
    }
}

void Point::LoadFromFile()
{
    FILE* file = nullptr;
    errno_t err = fopen_s(&file, "point_data.bin", "rb");
    if (err == 0 && file) {
        fread(this, sizeof(Point), 1, file);
        fclose(file);
        cout << "Data loaded from file successfully." << endl;
    }
    else {
        cerr << "Error: Unable to open file for reading." << endl;
    }
}