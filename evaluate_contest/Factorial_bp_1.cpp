#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}