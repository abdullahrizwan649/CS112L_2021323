#include <iostream>
using namespace std;


int main()
{
	int a,b;
	cout << "Enter first variable: ";
	cin >> a;
	cout << "Enter second variable: ";
	cin >> b;

	cout << "\n\nBefore Swapping-> A = " << a << " & B = " << b;

	a = a * b;
	b = a / b;
	a = a / b;

	cout << "\n\nAfter Swapping--> A = " << a << " & B = " << b;
	cout << endl;

	return 0;
}