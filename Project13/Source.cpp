#include <iostream>
#include <string>
using namespace std;

/*
*  дружественные методы класса
*/

class Apple;
class Human
{
public:
	void TakeApple(Apple& apple);
	void EatApple(Apple& apple)
	{
		
	}
	
};


class Apple
{

	friend Human;
public:
	Apple(int wheit, string color)
	{
		this->wheit = wheit;
		this->color = color;
	}
	

private:
	int wheit;
	string color;

};

int main()
{
	setlocale(LC_ALL, "ru");
	Apple apple(150, "Red");
	Human human;
	
	return 0;
}

void Human::TakeApple(Apple& apple)
{
	cout << "TakeApple" << "weight = " << apple.wheit << " color = " << apple.color << endl;
	
}
