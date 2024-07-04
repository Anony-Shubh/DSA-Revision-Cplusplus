#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout<<"\nEnter any number to find sum of it's digit: ";
    cin>>n;
    for(; n>0; n=n/10)
    {
        sum = sum+n%10;
    }
    cout<<sum;
    return 0;
}