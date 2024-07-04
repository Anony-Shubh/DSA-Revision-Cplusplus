#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime = true;
    cout<<"Enter any no to find out whether it is prime or not: "<<endl;
    cin>>n;
    for(int i=2;i<n-1;i++)
    {
        if(n%i==0)
        isPrime = false;
        break;
    }
    if(isPrime)
    {
        cout<<"The given number is prime";
    }
    else
    {
        cout<<"The given number is not prime";
    }
    return 0;
}