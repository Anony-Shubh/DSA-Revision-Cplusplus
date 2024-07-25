#include<iostream>
using namespace std;

void print(int *arr, int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void SelectionSort(int *arr, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex = i;
        for(int j=i+1;j<n;j++)
        {
            //loop to find minm
            if(arr[j]<arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
    print(arr, n);
}

int main()
{
    int n;
    cout<<"Enter length of array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    SelectionSort(arr, n);

    return 0;
}