#include <iostream>
#include <string>
using namespace std;
/*
* перезагрузка оператора присваивания
*/


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
	MyClass & operator = (const MyClass &other)
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
	MyClass a(10);
	MyClass b(2);
	MyClass c(5);
	c = a = b;	
	return 0;
}