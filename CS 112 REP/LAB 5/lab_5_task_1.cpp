#include <iostream>
using namespace std;

class heater
{
private: 
	int temp;
public:
	heater()
	{
		temp = 15;
	}
	int hot()
	{
		return temp += 5;
	}
	int cold()
	{
		return temp -= 5;

	}
};

int main()
{
	heater ram;
	int x;
	cout << "\t  Temperature = 15\n";
	do
	{
		cout << "\t\tMENU\n\n";
		cout << "\nPRESS 1 to turn on cooler.";
		cout << "\nPRESS 2 to turn on heater.";
		cout << "\nPRESS 0 to exit.\n";
		cin >> x;

		if (x == 1)
		{
			cout << "\n\t  Temperature = " << ram.hot();
			cout << endl;

		}

		else if (x == 2)
		{
			cout << "\n\t  Temperature = " << ram.cold();
			cout << endl;
		}
		else if (x == 0)
		{
			break;
		}
	




	} while (x != 0);


	return 0;
}
