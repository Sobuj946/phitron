#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int>prefix(n+1,0);
     for (int i = 1; i <= n; i++)
    {
        prefix[i]=prefix[i-1]+ v[i];
    }
    //  for (int i = 1; i <= n; i++)
    // {
    //    cout<< prefix[i]<<" ";
    // }
    // cout<<endl;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
       cout<<prefix[r]-prefix[l-1]<<endl;
     
        // if (prefix[r]-prefix[l-1]==0)
        // {
        //     cout << 0 << endl;
        // }
        // else if (prefix[r]-prefix[l-1]==1)
        //     cout << 1 << endl;
        // else if (prefix[r]-prefix[l-1]==2)
        // {
        //     cout << 2 << endl;
        // }
        // else
        //     cout << 3 << endl;
    }

    return 0;
}