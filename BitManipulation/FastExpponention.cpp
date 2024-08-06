#include<iostream>
using namespace std;

void FastExpo(int x, int n)
{
    int ans = 1;
    while(n>0)
    {
        int lastBit = n&1;
        if(lastBit)
        {
            ans=ans*x;
        }
        x = x*x;
        n = n >> 1;
    }
    cout<<ans;
}

int main()
{
    int n, i;
    cin>>n>>i;
    FastExpo(n, i);
    return 0;
}