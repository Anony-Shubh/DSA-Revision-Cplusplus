#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter length of an array: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i<<" element: "<<endl;
        cin>>arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int j=0;j<n;j++)
    {
        if(arr[j]>max)
        {
            max = arr[j];
        }
        if(arr[j]<min)
        {
            min = arr[j];
        }
    }
            cout<<"Maximum element  is : "<<max<<endl;
            cout<<"Minimum element is : "<<min<<endl;
    return 0;
}