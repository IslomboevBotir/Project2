#include <iostream>
#include <string>

int main()
{
	using namespace std;
	char charr[20];
	string str;

	cout << "Length if string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text: \n";
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;
	return 0;
}