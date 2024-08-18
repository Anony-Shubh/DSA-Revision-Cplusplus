#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(int *arr, int si, int  mid, int ei)
{   vector<int> temp;
    int i = si;
    int j = mid+1;
    while(i<=mid && j<=ei)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        } else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=ei)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int i=si, x=0;i<=ei;i++)
    {
        arr[i]=temp[x];
        x++;
    }
    return;
}

void mergeSort(int *arr, int si, int ei)
{
    if(si>=ei)
    {
        return;
    }
    int mid = si+(ei-si)/2; //(Divide)
    mergeSort(arr, si, mid); //left half sort
    mergeSort(arr, mid+1,ei); //right half sort
    merge(arr, si, mid, ei); //merge sort (CONQUER)
}
void printMergeSort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()

{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr.data(), 0, n-1);
    printMergeSort(arr.data(), n);

    return 0;
}