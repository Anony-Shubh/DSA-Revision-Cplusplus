#include<iostream>
using namespace std;
void printArray(int *arr, int n)

{
    for(int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            int currSum = 0;
            // cout<<start<<", "<<end;
            for(int i=start;i<end;i++)
            {
                currSum += arr[i];
            }
            cout<<currSum<<", ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the length of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printArray(arr, n);
    return 0;
}