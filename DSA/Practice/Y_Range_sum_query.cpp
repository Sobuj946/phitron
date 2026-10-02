#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int>prefsum(n+1,0);
      for (int i = 1; i <=n; i++)
    {
        prefsum[i+1]=prefsum[i]+v[i];
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
       
        cout << prefsum[r]-prefsum[l-1] << endl;
    }
    return 0;
}