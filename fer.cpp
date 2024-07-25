#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int arr[3];
    double ferb = 0.0;
    cout << "Enter your array elements : ";
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 3; i++)
    {
        ferb += pow(arr[i], 2);
    }

    cout << "The Frobenious Norm for the given array is = ";

    cout << sqrt(ferb) << endl;

    return 0;
}