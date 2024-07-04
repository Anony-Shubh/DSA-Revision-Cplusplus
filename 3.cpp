#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout<<"\nEnter any no to find some of it's odd digits: ";
    cin>>n;
    for(;n>0;n=n/10)
    {
        if(n%2!=0)
        {
            sum = sum+n%10;
        }
    }
    cout<<sum;
    return 0;
}