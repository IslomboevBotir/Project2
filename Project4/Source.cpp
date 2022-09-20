#include <iostream>
using namespace std;
/*функция, передача аргументов (параметров)*/

int Foo(int a)
{
	return ++a;
}

void main()
{
	setlocale(LC_ALL, "ru");
	int  value = 1;
	value = Foo(value);
	cout << value << endl;
}