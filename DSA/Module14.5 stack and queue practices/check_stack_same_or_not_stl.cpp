#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    list<int> s;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push_back(val);
    }
    int m;
    cin >> m;
    list<int> q;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        q.push_back(val);
    }
    // for (auto i : s)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto i : q)
    // {
    //     cout << i << " ";
    // }
    if (m != n)
    {
        cout << "NO\n";
        return 0;
    }
    bool flag = true;
    while (!s.empty() && !q.empty())
    {
        if (s.front() != q.back())
        {

            flag = false;
            break;
        }
        s.pop_back();
        q.pop_front();
    }
    if (flag)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}