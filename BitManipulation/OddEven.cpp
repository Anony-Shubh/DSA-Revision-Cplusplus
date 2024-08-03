#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(!(n&1))
    {
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

    return 0;
}