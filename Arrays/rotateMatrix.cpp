#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
    public:
    void rotateMatrix(vector<vector<int>>&matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=i; j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<m;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

int main()
{
    int m;
    vector<vector<int>>matrix(m, vector<int>(m));
    for(int i=0;i<m;i++)
    {
        for(int j=i;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    Solution sol;
    sol.rotateMatrix(matrix);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}
