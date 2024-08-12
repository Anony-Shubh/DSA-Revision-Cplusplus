#include<iostream>
#include<vector>
using namespace std;


int LO(vector<int> arr, int i, int target)
{
    int n= arr.size();
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==target)
    {
        return i;
    }
    return LO(arr, i-1, target);
}

int FO(vector<int> arr, int i, int target)
{
    int n= arr.size();
    if(i==n)
    {
        return -1;
    }    
    int idxFound = FO(arr, i+1, target);
    if(idxFound==-1 && arr[i]==target)
    {
        return i;
    }
    return idxFound;
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
    int target;
    cin>>target;
    cout<<FO(arr, 0, target)<<endl;
    cout<<LO(arr, 0, target)<<endl;

    return 0;
}