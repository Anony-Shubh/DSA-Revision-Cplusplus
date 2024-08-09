#include<iostream>
using namespace std;

// int increasing(int st, int end)
// {
//     if(st==end)
//     {
//         return 1;
//     }
//     return increasing(st++, end);
// }

int decreasing(int st)
{
    if(st==0)
    {
        return 1;
    }
    return decreasing(st-1);
}

int main()
{
    int st, end;
    cin>>st>>end;
    // cout<<increasing(st, end);
    cout<<decreasing(st);

    return 0;
}