#include<iostream>
using namespace std;

void UpdateIthBit(int n, int i, int v)
{
    n&=~(1<<i); //clear ith bit
    n |= (v<<i); //set ith bit
    cout<<n<<endl;
}


int main()
{
    int n, i, v;
    cin>>n>>i>>v;
    UpdateIthBit(n, i, v);
    return 0;
}