#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    unordered_map<int, int> mp;
    priority_queue<int, vector<int>, greater<int>> pq;

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int x;
            cin >> x;
            mp[x]++;
            pq.push(x);
        }
        else
        {
            while (!pq.empty() && mp[pq.top()] == 0)
            {
                pq.pop();
            }
                 if (pq.empty())
        {
            cout << "empty\n";
        }
        else
        {
            int mn = pq.top();
            cout << mn << "\n";
            pq.pop();

            mp[mn] = 0;
        }
        }
   
    }
    return 0;
}