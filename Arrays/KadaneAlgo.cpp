#include<iostream>
using namespace std;

int KadanesAlgo(int *arr, int n)
{
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum<0)
        {
            currSum==0;
        }
    }
    cout<<"Maxm subarray sum: "<<maxSum<<endl;
}

int main()
{
    int n;
    cout<<"Enter length of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    KadanesAlgo(arr, n);
    return 0;
}