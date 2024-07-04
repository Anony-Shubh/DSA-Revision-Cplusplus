#include<iostream>
using namespace std;
int main()
{
    int n;
    int rev=0;
    cout<<"Enter a number to reverse it: ";
    cin>>n;
    for(;n>0;n=n/10)
    {
        rev = rev*10 + n%10;
    }
    cout<<rev;
    return 0;
}