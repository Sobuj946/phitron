#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=true;
    while(!q.empty())
    {
        int par=q.front();
        q.pop();
        cout<<par<<" ";
        for(auto child:v[par])
        {
            if(vis[child]==false)
            {
            q.push(child);
            vis[child]=true;
            }
        }
    }
}
int main()
{
    int n, e;
    memset(vis,false,sizeof(vis));
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << "->";
    //     for (auto x : v[i])
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    bfs(1);
    return 0;
}