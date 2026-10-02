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
        string ans = "";
        for (auto c : s)
        {
            if(!ans.empty()&&ans.back()==c)
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(c);
            }
        }
        cout << ans.size() << endl;
    }
    return 0;
}