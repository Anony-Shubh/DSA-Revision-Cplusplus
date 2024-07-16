#include<iostream>
using namespace std;

void printArr(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter length if an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int start = 0;
    int end = n-1;
    int temp;

    while(start < end)
    {
        //swap
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"Reversed array is: ";
    printArr(arr, n);


    return 0;
}