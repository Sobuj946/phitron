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
    int val;
    cin >> val;
    v.push_back(val);
    int current = v.size() - 1;
    while (current != 0)
    {
        int parent = (current - 1) / 2;
        if (v[parent] < v[current])
        {
            swap(v[parent], v[current]);
        }
        else
        {
            break;
        }
        current = parent;
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}