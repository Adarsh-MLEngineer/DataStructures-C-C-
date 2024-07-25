#include <iostream>
using namespace std;

void arraySort(int a[], int size1)
{
    int found = 0;
    bool counted[size1] = {false}; // Array to keep track of counted elements

    // To find the number of repeating values in an array
    for (int i = 0; i < size1; ++i)
    {
        if (!counted[i])
        {
            for (int j = i + 1; j < size1; ++j)
            {
                if (a[i] == a[j])
                {
                    found++;
                    counted[j] = true; // Mark the element as counted
                }
            }
        }
    }

    // Printing the number of times repeated values occur in an array
    cout << "The array has " << found << " repeating elements " << endl;
}

int main()
{
    int a[10] = {6, 3, 8, 3, 9, 6, 3, 4, 3, 7};
    int size = (sizeof(a) / sizeof(a[0]));
    arraySort(a, size);

    return 0;
}
