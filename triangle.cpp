#include <iostream>

using namespace std;

#include <stdio.h>

int main()
{
    int a, b, c, large;
    cout << "Enter the three values of the triangel  : ";
    cin >> a >> b >> c;

    large = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "\nThe hypotenuse of the given traingle is = "
         << large;

    return 0;
}