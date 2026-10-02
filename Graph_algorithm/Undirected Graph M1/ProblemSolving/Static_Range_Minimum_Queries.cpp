#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (long long i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> prefix(n + 1, 0);
    for (long long i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i - 1] + v[i];
    }
 
    while (q--)
    {
        int l, r;
        cin >> l >> r;

    }
    return 0;
}