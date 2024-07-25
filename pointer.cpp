#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {6, 3, 8, 3, 9};
    int temp, i, n;
    int size = sizeof(arr[n] / arr[0]);

    for (i = 0; i < size - 1; ++i)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[min] > arr[j])
            {
                arr[i] = arr[j];
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    cout << arr[i] << "\t";
    return 0;
}
