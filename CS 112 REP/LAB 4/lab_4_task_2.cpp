#include <iostream>
using namespace std;
#define size 5
class Array2d
{
public:
    
    int arr1[size][size];
    int arr2[size][size];
    int temp;
    bool check;
    
    void initialize()
    {
        cout << "\nEnter values in array: " << endl;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin >> arr1[i][j];
            }
        }
    }
    void print()
    {
        cout << "\nThe array is: " << endl;
       
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << arr1[i][j] << "\t";
            }
            cout << endl;
        }

    }

    void transpose()
    {
        cout << "\nTranspose of the array is: \n";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << arr1[j][i] << "\t";
            }
            cout << endl;
        }
    }

    void isSymmetric()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i; j < size; j++)
            {
                if (arr1[i][j] != arr1[j][i])
                {
                    check = true;
                }
            }
        }

        if (check == true)
        {
            cout << "\nArray is not symmetric.";

        }
        else
        {
            cout << "Array is symmetric.";
        }
    }

    void multiply(Array2d array1, Array2d array2)
    {
        int temp[size][size] = { 0 };


        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                for (int k = 0; k < size; k++)
                {

                    temp[i][j] += array1.arr1[i][k] * array2.arr1[k][j];
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << endl;
                cout << temp[i][j]<<"\t";
            }
            cout << endl;
        }
    }

};



int main()
{
    int x;
    Array2d array1;
    Array2d array2;
    do
    {
        cout << "\n\t\tMAIN MENU\n\n";
        cout << "1.\tInitialize the array." << endl;
        cout << "2.\tTranspose the array." << endl;;
        cout << "3.\tCheck if the array is symmetric." << endl;;
        cout << "4.\tMultiply the array with another." << endl;;
        cout << "5.\tPrint array." << endl;;
        cout << "0.\tExit." << endl;;
        cout << "\t\t\n";

        cin >> x;
        switch (x)
        {
        case 1:
        {
            array1.initialize();
            break;
        }

           case 2:
           {
               array1.transpose();
               break;
           }
           
           case 3:
           {
               array1.isSymmetric();
               
               break;
           }

           
           case 4:
           {
               cout << "Second array elements: ";
               for (int i = 0; i < size; i++)
               {
                   for (int j = 0; j < size; j++)
                   {
                       cin >> array2.arr1[i][j];
                   }
               }
               array1.multiply(array1, array2);
               break;
           }    
           
        case 5:
        {
            array1.print();
            break;
        }
        default:
            cout << "ERROR!!!Please try again." << endl;
            break;
        }
        } while (x != 0);


        return 0;
    }