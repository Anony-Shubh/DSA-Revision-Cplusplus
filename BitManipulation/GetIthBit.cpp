#include<iostream>
using namespace std;
int GetIthBit(int n, int i)
{
    int bitMask = 1<<i;
    if(!(n&bitMask))
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int n, i;
    cout<<"Enter number and then then the Ith bit: ";
    cin>>n>>i;
    cout<<GetIthBit(n, i);
    return 0;
}