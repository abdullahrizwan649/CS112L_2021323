#include <iostream>
using namespace std;
#define IF num!=0
#define IF2 ((num & (num - 1)) == 0)
#define ELSE n!=0


void base(int num)
{
	if ((IF) && (IF2))
		cout << "\n" << num << " is a power of 2.\n";

	else
		cout << "\n" << num << " is not a power of 2." << endl;
}
int main()
{
	int num;
	for (int i = 0; i < 100; i++)
	{
		cout << "Enter the number you want to test greater than zero: ";
		cin >> num;
		if (num >= 0)
		{
			break;
		}
		cout << "TRY AGAIN\n";
	}


	base(num);


	return 0;
}