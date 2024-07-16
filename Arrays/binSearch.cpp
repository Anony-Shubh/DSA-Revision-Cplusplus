#include<iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
    int st=0, end =n-1, mid;
    while(st<=end)
    {
        mid=(st+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            st = mid+1;
        }
        else
        {
            end =mid-1;
        }
    }
    return -1;
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
    int x;
    cout<<"Enter the element which you want to search: ";
    cin>>x;
    cout<<binSearch(arr,n,x);
    return 0;
}