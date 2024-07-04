#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter any number to find it's table: ";
    cin>>n;
    for (int i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<(n*i)<<endl;
    }
    return 0;
}