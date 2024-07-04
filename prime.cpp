#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter a number to find prime numbers between 2 to that number: ";
    cin>>n;
    for(int i=2; i<=n;i++)
    {
        int curr = i;
        bool isPrime = true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(curr%j==0)
            {
                isPrime = false;
            }
        }
        if(isPrime)
        {
            cout<<curr<<",\t";
        }
    }
    return 0;
}