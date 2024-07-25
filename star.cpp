#include<iostream>
using namespace std;

//Main function begins here
int main()
{
    int num;
    cout<<"Enter your star limt ";
    cin>>num;
    for(int i=0; i<=num; ++i)
    {
    
        for(int j=1; j<=num; ++j)
        {
            cout<<" ";
        }

            for(int k=1; k<=2*i-1; ++k)
            {
                cout<<"*";
            }
            cout<<endl;
    }
    return 0;    
}