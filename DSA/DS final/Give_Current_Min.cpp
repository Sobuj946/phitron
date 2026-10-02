#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int y;
            cin >> y;
            pq.push(y);
            cout << pq.top() << endl;
        }
        else if (x == 1)
        {
            if(!pq.empty())
            {
            cout << pq.top() << endl;
            }
            else{
                cout<<"Empty\n";
            }
        }
        else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout << pq.top() << endl;
                }
                else
                {
                    cout << "Empty\n";
                }
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}