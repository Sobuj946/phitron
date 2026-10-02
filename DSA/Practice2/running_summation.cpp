#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> prefsum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        prefsum[i]=prefsum[i-1]+v[i];
    }
      for (int i = 1; i <= n; i++)
    {
       cout<<prefsum[i]<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}