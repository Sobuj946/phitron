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
        cin >> n;
        string s;
        cin >> s;
    int count1 = count(s.begin(), s.end(), '1');
    int count0 = n - count1;

    cout << count1 * (n - 1) + count0 << "\n";
    
    }
    return 0;
}

