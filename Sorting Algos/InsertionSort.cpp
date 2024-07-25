#include<iostream>
using namespace std;

void print(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void InsertionSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr)
        {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1]=curr;

    }
    print(arr, n);

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
    InsertionSort(arr, n);

    return 0;
}