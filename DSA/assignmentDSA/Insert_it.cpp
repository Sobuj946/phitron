#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    vector<int> v1(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    int x;

    cin >> x;
    if (n > x && m > x)
    {
        v.insert(v.begin() + x, v1.begin(), v1.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else if (n > x && m == x)
    {
        v.insert(v.begin() + x, v1.begin(), v1.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        v.insert(v.begin() + x, v1.begin(), v1.end());
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}