#include<iostream>
using namespace std;

#define read(type, var) type var; cin >> var;
void baseConvert(int add, int base, char string1[], char string2[])
{
	if (base == 2) {
		int remainder, binary = 0, power = 1;
		while (add > 0) {
			remainder = add % 2;
			add /= 2;
			binary = binary + (remainder * power);
			
			
			
			power *= 10;
		}
		cout << "Value is: " << endl;
		cout << binary;
	}
	else if (base == 8) {
		int remainder, oct = 0, i = 0, power = 1;
		while (add > 0) {
			remainder = add % 8;
			oct += +remainder * power;
			add /= 8;
			
			
			power *= 10;
		}
		cout << "The value is: " << endl;
		cout << oct;
	}
	else if (base == 16) {
		char hexa[100];
		int i = 0;
		while (add > 0) {
			int remainder = 0;
			remainder = add % 16;
			add /= 16;
			if (remainder < 10) {
				hexa[i] = (remainder + 48);
				i++;
			}
			else {
				hexa[i] = (remainder + 55);
				i++;
			}

		}
		cout << "The value is: " << endl;
		for (int j = i - 1; j >= 0; j--) {
			cout << hexa[j];
		}

	}
	else {
		cout << "The value is: " << endl;
		cout << add;
	}
}
int intConvertnt(char x)
{
	if (x >= '0' && x <= '9') {
		return (int)(x - '0');
	}
	else {
		return (int)(x + 10 - 'A');
	}
}
int deciConvert(char str[], int base)
{
	int len = strlen(str);
	int power = 1, decimal = 0;
	for (int i = len - 1; i >= 0; i--) {
		int number;
		number = intConvertnt(str[i]);
		if (number >= base)
			return -1;
		else {
			decimal = decimal + (number * power);
			power = power * base;
		}
	}
	return decimal;
}

int main() {
	cout << "Enter base = \n" ;
	read(int, base);
	bool base_found = false;


	while (base_found == false) {
		if (base == 2 || base == 8 || base == 10 || base == 16) {
			base_found = true;
		}
		else {
			cout << "Invalid base entered!\nPlease try again: \n" ;
			cin >> base;
			base_found = false;
		}
	}
	cout << "Enter a number with base: " ;
	read(char, string1[100])
		int intstring1 = deciConvert(string1, base);
	while (intstring1 == -1) {
		cout << "Invalid Number entered!\nTRY AGAIN\n" ;
		cin >> string1;
		intstring1 = deciConvert(string1, base);
	}
	cout << "Enter another number with base: " ;
	read(char, string2[100])
		int intstring2 = deciConvert(string2, base);
	while (intstring2 == -1) {
		cout << "Invalid Number entered!\nTRY AGAIN\n";
		cin >> string2;
		intstring2 = deciConvert(string2, base);
	}
	
	
	
	int result = intstring1 + intstring2;
	baseConvert(result, base, string1, string2);
	return 0;
}