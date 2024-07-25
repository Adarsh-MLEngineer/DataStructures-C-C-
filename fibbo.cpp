#include <iostream>
using namespace std;

int main()
{
    int num, a = 1, b = 1, c;
    cout << "Enter your limit\t";
    cin >> num;
    for (int i = 3; i <= num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c;
    return 0;
}