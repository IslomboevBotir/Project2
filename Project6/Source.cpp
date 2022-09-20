#include <iostream>
#include <string>
using namespace std;
/*
* Перегрузка оператора == и !=
*/


class Human
{
public:
	int age;
	int weight;
	string name;

	void Print()
	{
		cout << "Имя " << name << "\nВес " << weight << "\nВозраст " << age << endl << endl;
	}
};

class MyClass
{
public:
	int* data;
	MyClass(int size)
	{
		this->Size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}
		cout << "Вызвался конструктор " << this << endl;
	};
	MyClass(const MyClass& other)
	{
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}

		cout << "Вызвался конструктор копирования  " << this << endl;
	}
	MyClass& operator = (const MyClass& other)
	{
		cout << "Вызвался оператор присваивания  " << this << endl;
		this->Size = other.Size;
		if (this->data != nullptr)
		{
			delete[] this->data;
		}
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)
		{
			this->data[i] = other.data[i];
		}
		return *this;
	}
	~MyClass()
	{
		cout << "Вызвался деструктор " << this << endl;
		delete[] data;
	};

private:
	int Size;

};

class Point
{
private:
	int x;
	int y;

public:
	Point()
	{
		x = 0;
		y = 0;
		cout << this << " constructor" << endl;
	}
	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
		cout << this << " constructor" << endl;
	}
	bool operator == (const Point & other)
	{
		return this->x == other.x && this->y == other.y;
	}
	bool operator != (const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
};

void Foo(MyClass value)
{
	cout << "Вызвалась функция FOO" << endl;
}

MyClass Foo2()
{
	cout << "Вызвалась функция FOO_2" << endl;
	MyClass temp(2);
	return temp;
}


int main()
{
	setlocale(LC_ALL, "ru");

	Point a(5, 1);
	Point b(9, 4);
	bool result = a != b;
	
	return 0;
}