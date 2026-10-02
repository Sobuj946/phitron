#include <bits/stdc++.h>
using namespace std;
int mat[1005][1005];
// int mx_sum(int i,int j)
// {
//     if(i<0||j<0)
//     {
//         return 0;
//     }
//     mx_sum()
// }
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    // cout << mx_sum(n,m) << endl;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i+1&&j)
            {
            sum+=mat[i][j];
            cout<<mat[i][j]<<endl;
            }
            else if(i&&j+1)
            {
            cout<<mat[i][j]<<endl;
            sum+=mat[i][j];
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}