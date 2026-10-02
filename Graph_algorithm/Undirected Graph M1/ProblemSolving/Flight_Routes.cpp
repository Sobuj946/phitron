#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[10005];
#define ll long long int
vector<ll> dis[10005];
int n, e, k;
void dijkstra(int source)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, source});
    dis[source][0] = 0;
    while (!q.empty())
    {
        pair<ll, ll> par = q.top();
        q.pop();

        ll par_node = par.second;
        ll par_dis = par.first;
        if (  par_dis>dis[par_node][k - 1])
        {
            continue;
        }
        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;

            if (child_dis + par_dis < dis[child_node][k - 1])
            {
                dis[child_node][k - 1] = child_dis + par_dis;
                q.push({dis[child_node][k - 1], child_node});
                sort(dis[child_node].begin(), dis[child_node].end());
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> e >> k;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i].resize(k);
        for (int j = 0; j < k; j++)
            dis[i][j] = 1e18;
    }

    dijkstra(1);
    for (ll v : dis[n])
        cout << v << " ";

    return 0;
}
