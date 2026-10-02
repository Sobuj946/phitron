#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, pair<int, int>> mp;

    for (int i = 0; i < n; i++)
    {
        int val = v[i];
        if (mp.find(val) == mp.end())
        {
            mp[val] = {i + 1, i + 1};
        }
        else
        {
            mp[val].second = i + 1;
        }
    }
    for (auto i : mp)
    {
        cout << i.first << " " << i.second.first << " " << i.second.second << endl;
    }
    return 0;
}