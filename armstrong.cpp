#include<iostream>
using namespace std;
int main()
{
    int n, originalNumber;
    int cubeSum = 0;
    bool isArmstrong = true;
    cout<<"\nEnter any number to find is it's an armstrong no or not: ";
    cin>>n;
    originalNumber = n;
    for (n;n>0;n=n/10)
    {
        int lastDig = n%10;
        cubeSum += lastDig*lastDig*lastDig;
    }
        if(originalNumber!=cubeSum)
        {
            isArmstrong = false;
        }
        if(isArmstrong)
        {
        cout<<originalNumber<<" is an Armstrong no.";
        }
        else
        {
        cout<<originalNumber<<" is not an Armstrong no.";
    }
    return 0;
}