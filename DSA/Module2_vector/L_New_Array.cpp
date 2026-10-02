#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector<int> v(n);
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    vector<int> v3;
    v3 = v1;
    v3.insert(v3.begin() + n, v.begin(), v.end());
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    solve(n);
    return 0;
}