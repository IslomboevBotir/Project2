#include <iostream>

using namespace std;
void Print(string str);

int main()
{
	setlocale(LC_ALL, "ru");
	Print("bla bla CAR");

	return 0;
}

void Print(string str)
{
	cout << "Это строка - " << str;

}