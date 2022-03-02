#include <iostream>
#include<string.h>
using namespace std;

struct SGPA
{
    string name;
    string reg;
    string program;
    double courses;
    double cgpa;
};
double gpa(int x)
{
    if (x >= 86)
        return 4;
    else if (x < 86 && x >= 82)
        return 3.67;
    else if (x <82 && x>=78)
        return 3.33;
    else if (x < 78 && x >= 74)
        return 2.67;
    else if (x < 74 && x >= 70)
        return 2.33;
    else if (x < 70 && x >= 60)
        return 2;
    else if (x < 60)
        return 0;

}


int main()
{
    int x;
    cout << "\t\t***THIS PROGRAM WILL CALULATE THE SEMESTER GPA***\n\n";
    SGPA one[3];
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "\n\nEnter the name: ";
        cin >> one[i].name;
        cout << "\nEnter the reg no.: ";
        cin >> one[i].reg;
        cout << "\nEnter the degree program: ";
        cin >> one[i].program;
        cin.ignore();
        cout << "\nEnter the number of courses: ";
        cin >> one[i].courses;

        double y = 0;
        for (int j = 0; j < one[i].courses; j++)
        {
            cout << "\nEnter the marks of course no." << j << ":";
            cin >> x;
            
            y = gpa(x) +y;

        }
        one[i].cgpa =(y * 3) / (one[i].courses * 3);


    }

    for (int i = 0; i < num; i++)
    {
    
    cout << "S.No.\tName\tReg. No.\tDegree Program\tSGPA\n";
    cout << i << "\t" << one[i].name << "\t  " << one[i].reg << "\t\t" << one[i].program << "\t\t  "<< one[i].cgpa<<endl;

    }
 /*   for (int j = 0; j < 30; j++)
    {
        for (int i = 0; i < 29; i++)
        {
            if (one[i].cgpa < one[i + 1].cgpa)
            {
                SGPA xyz = one[i];
                one[i] = one[i + 1];
                one[i + 1] = xyz;
            }
        }
    }
    cout << "List in ascending order is: \n\n";
    cout << "\nS No.\t\tName\t\tReg.No.\t\tDegree\t\tSGPA";
    for (int i = 0; i < 30; i++)
    {
        cout << "\n   " << i + 1 << "\t\t" << one[i].name << "\t\t" << one[i].reg << "\t\t" << one[i].program << "\t\t" << one[i].cgpa << "\n\n";
        cout<<"The b"
    }

    /// <summary>
    /// 
    /// </summary>
    /// <returns></returns>*/
    return 0;
}
