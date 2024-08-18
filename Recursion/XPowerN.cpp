#include<iostream>
using namespace std;

int pow(int x, int n)
{
    if(n==0)
    {
        return 1;
    }
    return x*pow(x, n-1);
}

int main()
{
    int x;
    int n;
    cout<<"enter any no and then enter it's power: ";
    cin>>x>>n;
    cout<<pow(x,n);
    return 0;
}