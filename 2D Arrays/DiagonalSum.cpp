#include<iostream>
using namespace std;

void DiagonalSum(int arr[][100], int n, int m)
{
    int sum=0;
    for(int i=0;i<n;i++){ //rows
        for(int j=0;j<m;j++){//columns
            if(i==j){
                sum += arr[i][j];
            } else if (j==n-i-1){
                sum += arr[i][j];
            }
        }
    }
    cout<<"DiagonalSum: "<<sum;
}

void DiagonalSum2(int arr[][100], int n, int m)
{
        int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i][i];
        if(i!=n-i-1)
        {
            sum+=arr[i][n-i-1];
        }
    }
    cout<<sum;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[100][100];
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    DiagonalSum(arr, n, m);
    DiagonalSum2(arr, n, m);
    return 0;
}