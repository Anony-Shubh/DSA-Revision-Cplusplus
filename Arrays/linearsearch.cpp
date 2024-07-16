#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
        return -1;
}

int main()
{
    int length;
    cout<<"Enter the length of an array: ";
    cin>>length;
    int a[length];
    for(int i=0;i<length;i++)
    {
        cin>>a[i];
    }
    int x;
    cout<<"Enter the number among the array which you want to find: ";
    cin>>x;
    cout<<linearSearch(a, length, x);

    return 0;
}