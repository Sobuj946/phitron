#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n > 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
            {
                continue;
            }
            else
            {
                cout << i << endl;
            }
        }
    }
    else
        cout << -1 << endl;

    return 0;
}