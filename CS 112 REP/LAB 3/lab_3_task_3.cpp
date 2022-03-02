#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter size of array: " << endl;//inputting size of array
	cin >> size;

	int* arr = new int[size];
	cout << "Enter elements in array: ";
	//inputting elements in array
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "The original array was: " << endl;
	cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "]";
	cout << endl;

	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (arr[i] < 0 && arr[i + 1]>0)
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;


			}
		}
	}
		cout << endl;

		cout << "[ ";
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "]";
		cout << endl;


		delete[] arr;





	return 0;
}
