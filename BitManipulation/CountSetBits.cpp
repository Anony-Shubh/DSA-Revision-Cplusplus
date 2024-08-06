#include<iostream>
using namespace std;

void CountSetBits(int n)
{
    int count = 0;
    while(n>0)
    {
        int lastDig = n&1;
        count += lastDig;
        n >>= 1;
    }
    cout<<count;
}

int main()
{
    int n;
    cin>>n;
    CountSetBits(n);
    return 0;
}