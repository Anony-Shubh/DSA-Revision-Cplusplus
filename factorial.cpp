#include<iostream>
using namespace std;
int main()
{
    int n;
    int fact = 1;
    cout<<"\nEnter any number to find it's factorial: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    cout<<fact;
    return 0;
}