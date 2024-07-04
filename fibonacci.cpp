#include<iostream>
using namespace std;
int main()
{
    int n, a=0, b=1,c;
    cout<<"\nEnter a no to find fibonacci series till that no: ";
    cin>>n;
    cout<<a<<endl;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}