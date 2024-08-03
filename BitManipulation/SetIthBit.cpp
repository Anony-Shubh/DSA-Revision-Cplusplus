#include<iostream>
using namespace std;

int SetIthBit(int n, int i)
{
    int setMask = 1<<i;
    return (n|setMask);
}

int main ()
{
    int n, i;
    cin>>n>>i;

    cout<<SetIthBit(n, i);
    return 0;
}