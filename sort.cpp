#include <iostream>
using namespace std;

int main()
{
    int arr[5], found = 0, num;
    char choice;
    cout << "Enter your array of numbers\n";
    for (int i = 0; i < 5; i++)
    {

        cin >> arr[i];
    }
    cout << "The Array of numbers you have given are\n";
    for (int i = 0; i < 5; i++)
    {
        cout << " "
             << arr[i];
    }
    cout << "\nEnter the number you want to search\n";
    cin >> num;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            found++;
            break;
        }
        cout << "\nIts location in the array is : "
             << i + 1;
    }

    return 0;
}