#include<iostream>
using namespace std;

void printArr(int nums[],int n)
{
    // cout<<sizeof(nums);
    // int n = sizeof(nums)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<", ";
    }
    cout<<endl;

}
// void func(int arr[])
// {
//     arr[0]=1000;
// }
int main()
{
    // int a=5;
    // int *ptr = &a;
    // cout<<ptr<<endl;

    int arr[]= {1,2,3,4};
    int n = sizeof(arr)/sizeof(int);
    // func(arr);
    // cout<<arr[0];
    printArr(arr, n);
    return 0;
}