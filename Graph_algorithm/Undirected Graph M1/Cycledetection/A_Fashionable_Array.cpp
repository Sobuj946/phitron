#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mn = v[0];
    int mx = v[n - 1];
    int cnt1 = 0, cnt2 = 0;
    if (mx % 2 == mn % 2)
    {
        cout << 0 << endl;
    }
    else
    {
        int i = 0;

        while (v[i] % 2 != mx % 2)
        {
            i++;
            cnt1++;
        }
        int j = n-1;
        while (v[j] % 2 != mn % 2)
        {
            j--;
            cnt2++;
        }
        cout << min(cnt1, cnt2) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}