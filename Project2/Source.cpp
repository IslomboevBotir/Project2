#include <iostream>
#include <string>

using namespace std;
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
	void SetY(int y)
	{
		this->y= y;
	}
	void Print()
	{
		cout << "x = " << x << "\ty = " << y << endl;
	}
};
int main()
{
	Point a;
	a.SetY(12);
	a.Print();
	return 0;
}