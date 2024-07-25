#include <iostream>
using namespace std;

int fibb(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;

    int i;
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n - 1];
}

int main()
{
    int n;
    cout << "Enter your num value : " << endl;
    cin >> n;
    int result = fibb(n);

    cout << result << "\n";

    return 0;
}