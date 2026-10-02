#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int largest = INT_MIN, second = INT_MIN;
    int left = -1, right = -1;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > largest)
        {
            second = largest;
            right = left;

            largest = ar[i];
            left = i;
        }
        else if (ar[i] > second && ar[i] < largest)
        {
            second = ar[i];
            right = i;
        }
    }

    cout << left << " " << right << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
