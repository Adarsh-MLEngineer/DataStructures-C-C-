#include <iostream>
using namespace std;

void Sortlist(int a[], int b[], int size1, int size2)
{       
    int temp[10];
    int k = 0;


    for (int i = 0; i < size1; ++i)
    {
        for (int j = 0; j < size2; ++j)
        {
            if (a[i] == b[j])
            {
                temp[k] = a[i];
                k++;
                break; 
            }
        }
    }

    for (int i = 0; i < k-1; ++i)
    {
        for (int j = 0; j < k-i-1; ++j)
        {
            if (temp[j] > temp[j+1])
            {
                int t = temp[j];
                temp[j] = temp[j+1];
                temp[j+1] = t;
            }
        }
    }

    cout << "The sorted list is = ";
    for (int i = 0; i < k; ++i)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[10] = {6, 3, 8, 3, 9, 6, 3, 4, 3, 7};
    int b[10] = {9, 4, 8, 8, 5, 0, 8, 8, 1, 9};
    int size1 = 10;
    int size2 = 10;

    Sortlist(a, b, size1, size2);

    return 0;
}
