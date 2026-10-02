#include <bits/stdc++.h>
using namespace std;
int parent[10005];
int group_size[10005];
int find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);
    if (group_size[leader1] > group_size[leader2])
    {
        parent[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        parent[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}
vector<pair<int, int>> rmv;
vector<pair<int, int>> create;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        group_size[i] = 1;
        parent[i] = -1;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        int leader1 = find(a);
        int leader2 = find(b);
        if (leader1 == leader2)
        {
            rmv.push_back({a, b});
        }
        else
        {
            dsu(a, b);
        }

    }
            for (int i = 2; i <= n; i++)
        {
            int leader1 = find(1);
            int leader2 = find(i);

            if (leader1 != leader2)
            {
                create.push_back({1, i});
                dsu(1,i);
            }
        }
    cout << rmv.size() << endl;
    for (int i = 0; i < rmv.size(); i++)
    {
        cout << rmv[i].first << " " << rmv[i].second << " " << create[i].first << " " << create[i].second << endl;
    }
    return 0;
}