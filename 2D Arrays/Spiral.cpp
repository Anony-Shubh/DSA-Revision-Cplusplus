#include<iostream>
using namespace std;

void print(int mat[][100], int m, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j];
        }
    }
}

void spiral(int mat[][100], int n, int m)
{
    int srow=0, scol=0;
    int erow=n-1, ecol=m-1;
    //outerloop
    while(srow<=erow && scol<=ecol)
    {
    //top
    for(int j=scol;j<=ecol;j++)
    {
        cout<<mat[srow][j]<<" ";
    }
    //right
    for(int i=srow+1;i<=erow;i++)
    {
        cout<<mat[i][ecol]<<" ";
    }
    //bottom
    
    for(int j=ecol-1;j>=scol;j--)
    {
        if(srow==erow)
    {
        break;
    }
        cout<<mat[erow][j]<<" ";
    }
    //left
    
    for(int i=erow-1;i>=srow+1;i--)
    {
        if(scol==ecol)
    {
        break;
    }
        cout<<mat[i][scol]<<" ";
    }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    cout<<endl;
}

int main()
{
    int n, m;
    cout<<"Enter row and colum length: ";
    cin>>n>>m;
    int mat[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    spiral(mat, n, m);

    return 0;
}