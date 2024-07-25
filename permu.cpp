#include <iostream>

using namespace std;

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; ++i)
    {
        fact *= i;
    }
    return fact;
}

int permutation(int n, int r)
{
    if (n < r || n < 0 || r < 0)
    {
        return 0; 
    }
    return factorial(n) / factorial(n - r);
}

int main()
{
    int a, b;
    cout << "Enter the values of n and r for nPr: ";
    cin >> a >> b;
    cout << "The permutation value is = " << permutation(a, b) << endl;

    return 0;
}
