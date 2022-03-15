#include <iostream>
using namespace std;

class parity
{
public:

	int* arr = new int[element+size];

	int size;
	int element;
	
	parity()
	{
		element = 0;
		size = 0;
	}

		void put() 
		{
		cout << "Enter number of values to be inputted: ";
		cin >> size;

		cout << "Enter values: ";
		for (int i = element; i < element + size; i++) 
		{
			cin >> *(arr + i);
		}

		element = element + size;
		size = 0;
		}

		void print()
	{
		cout << "\nTHIS IS YOUR ARRAY: \n";
		cout << "[ ";
		for (int i = 0; i <element; i++)
		{
			
			cout << *(arr + i)<<" ";
		}
		cout << "]";

	}

	bool test()
	{
		if(element %2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void del()
	{
		element = element - 1;
		cout << "DELETED\n" ;
	}
};

int main()
{
	int check;
	int element;
	parity man;
	do
	{
		cout << "\t\t  MENU\n\n";
		cout << "\n\tPRESS 1 to input numbers.";
		cout << "\n\tPRESS 2 to print all numbers.";
		cout << "\n\tPRESS 3 to delete last element.";
		cout << "\n\tPRESS 4 to test elements.";
		cout << "\n\tPRESS 0 to exit.\n";


		cin >> element;

		if (element == 1)
		{
			man.put();
			cout <<endl;
		}

		else if (element == 2)
		{
			man.print();
			cout << endl;
		}

		else if (element == 3)
		{
			man.del();
			cout << endl;
		}

		else if (element == 4)
		{
			if (man.test() == true)
			{
				cout << "\nEven.";
			}
			else
			{
				cout << "\nNot even.";
			}
		}

		else if (element == 0)
		{
			break;
		}





	} while (element != 0);

	return 0;
}