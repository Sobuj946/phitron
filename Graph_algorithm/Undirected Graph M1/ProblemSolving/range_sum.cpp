#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long int l, r;
        cin >> l >> r;
        if (l < r)
        {
            long long int left = (l - 1) * l / 2;
            long long int right = r * (r + 1) / 2;
            cout << right - left << endl;
        }
        else
        {
            long long int left = (l + 1) * l / 2;
            long long int right = r * (r - 1) / 2;
            cout <<  left - right  << endl;
        }
    }
    return 0;
}