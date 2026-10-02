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
        int n;
        string s;
        cin >> n >> s;
        vector<int> freq(26, 0);
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int ans = 0;
        while (!s.empty())
        {
            string next;
            for (int i = 0; i < s.size(); i++)
            {
                if (i % 2 == 1)
                {
                    next += s[i];
                }
            }
            s = next;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}