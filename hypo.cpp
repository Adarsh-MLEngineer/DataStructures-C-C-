#include <iostream>
#include <math.h>
#define area(a, b) (sqrt(pow(a, 2) + pow(b, 2)))

using namespace std;

int main()
{
    double a, b, hypo;
    cout << "Enter the values of the base and height of the traingle : ";
    cin >> a >> b;
    hypo = area(a, b);

    cout << "\nThe area of the hypotenuse is =  " << hypo;

    return 0;
}