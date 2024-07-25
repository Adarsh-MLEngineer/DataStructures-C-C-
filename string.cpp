#include <iostream>
using namespace std;

int main()
{
    const char *name[50] = {"Adarsh", "Amarjith", "shafin", "rahul"};
    int size = sizeof(name) / sizeof(name[0]);

    cout << name[0] << endl;

    return 0;

    
}