#include <iostream>
using namespace std;
#define POWER(i, j) (i * (2<<(j-1)));
int main() {
	
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	if (num2 <= 0) {
		while (num2 < 0) {
			cout << "Enter the second number which is greater than 0: \n";
			cin >> num2;
		}
		if (num2 == 0) {
			cout << "The answer is: " << num1 << endl;
		}
	}
	else {
		int i = POWER(num1, num2);
		cout << "The answer is: " << i << endl;
	}
}