#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[10];
    int arr2[10];
    int arr3[20];

    cout << "Input For Array 1:\n";
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Input For Array 2:\n";
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr2[i];
    }

    int j = 0;
    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
        {
            arr3[i] = arr[i];
        }
        else
        {
            arr3[i] = arr2[j];
            j++;
        }
    }
    // Sort
    for (int i = 0; i < 20-1; i++)
    {
        int temp;
        for (int j = 0; j < 20-1-i; j++)
        {
            if (arr3[j] < arr3[j+1])
            {
                temp = arr3[j];
                arr3[j] = arr3[j+1];
                arr3[j+1] = temp;
            }
        }
    }

    cout << "\nArray In Descending Order:\n";
    for (int i = 0; i < 20; i++)
    {
        cout << "Element " << i+1 << ": " << arr3[i] << "\n";
    }
}