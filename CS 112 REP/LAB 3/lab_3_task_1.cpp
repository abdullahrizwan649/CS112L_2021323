#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter size of array: " << endl;//inputting size of array
	cin >> size;

	int* arr1 = new int[size];
	cout << "Enter elements in array of size " << size << ":";
	//inputting elements in array
	for (int i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}
	cout << "The original array was: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " ";
	}

	cout << endl;

	//creating a new array
	int* arr2 = new int[size + 1];
	int temp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		temp = arr1[i + 1] - arr1[i];
		arr2[i] = temp;
	}

	cout << "The new array is: " << endl;

	for (int i = 0; i < size - 1; i++)
	{
		cout << arr2[i] << " ";
	}





	return 0;
}
