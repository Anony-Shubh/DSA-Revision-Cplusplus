#include<iostream>
using namespace std;

bool checkSort(int *arr, int n, int i)
{
    if(i==n-1)
    {
        return true;
    }
    if(arr[i]>arr[i+1])
    {
        return false;
    }

    return checkSort(arr, n, i+1);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<checkSort(arr, n, 0);

    return 0;
}