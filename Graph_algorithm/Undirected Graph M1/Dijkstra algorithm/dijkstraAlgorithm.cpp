#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[105];
int dijkstra[105];
void dijk(int source)
{
    queue<pair<int, int>> q;
    q.push({source, 0});
    dijkstra[source] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int parent_node = par.first;
        int parent_distance = par.second;
        for (auto child : adj_list[parent_node])
        {
            int child_node = child.first;
            int child_distance = child.second;
            if (child_distance + parent_distance < dijkstra[child_node])
            {
                dijkstra[child_node] = child_distance + parent_distance;
                q.push({child_node, dijkstra[child_node]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
    {
        dijkstra[i] = INT_MAX;
    }
    dijk(0);
    for (int i = 0; i < n; i++)
    {
        cout <<i<<"->"<< dijkstra[i] << endl;
    }
    return 0;
}