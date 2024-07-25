#include <iostream>
using namespace std;

int main()
{
    int a[10][10], trans[10][10], i, j, r, c;

    cout << "Enter your number of rows and columns : " << endl;
    cin >> r >> c;
    cout << "\nYou have given a " << r << "X" << c << " matrix\n";
    cout << "\nEnter the elements of the matrix\n";

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            cin >> a[i][j];
        }
    }

    cout << "\nThe given matrix is \n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    // Transpose operation
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            trans[i][j] = a[j][i];
        }
    }

    // Printing the transpose matrix
    cout << "\nThe transpose of the matrix A \n";
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < r; j++)
        {

            cout << trans[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}