#include <iostream>
using namespace std;
struct record
{
    string name;
    string age;
    string city;
    int date;
    string month;
    int year;

};
int main()
{
    record data[20];
    for (int i = 1; i < 3; i++)
    {
        cout << "Enter the record of no. "<<i<<" user: \n\n";
        cout << "Enter the name: ";
        cin >> data[i].name;
        cin.ignore();
        cout << "\nEnter the age: ";
        cin >> data[i].age;
        cin.ignore();
        cout << "\nEnter the city: ";
        cin >> data[i].city;
        cin.ignore();
    

    
}