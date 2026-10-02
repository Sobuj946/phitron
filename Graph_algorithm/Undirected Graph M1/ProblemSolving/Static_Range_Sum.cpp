#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, q;
    cin >> n >> q;
    vector<long long> v(n );
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long> prefix(n , 0);
    for (long long i = 0; i < n; i++)
    {
        prefix[i+1] = prefix[i] + v[i];
    }
 
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout<<prefix[r]-prefix[l]<<endl;
    }
    return 0;
}