#include <iostream>
#include <string>

/*
*  как внести реализацию метода из класса
*/
using namespace std;
class MyClass
{
public:
	MyClass();
	~MyClass();
	void PrintMessage();
private:
	
};
	
MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::PrintMessage()
{
	cout << "Hello!" << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	MyClass a;
	a.PrintMessage();

	return 0;
}