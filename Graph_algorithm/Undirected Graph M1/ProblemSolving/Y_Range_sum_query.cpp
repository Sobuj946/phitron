#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, q;
    cin >> n >> q;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<long long> prefix_sum(n + 1);
    for (int i = 1; i <= n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        // if (l == 1)
        // {
        //     cout << prefix_sum[r] << endl;
        // }
        // else
            cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }
    return 0;
}