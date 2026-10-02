#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
bool vis[1005];
int dist[1005];
int bfs(int source, int destination)
{
    queue<int> q;
    q.push(source);
    vis[source] = true;
    int cnt = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
               dist[child]=dist[par]+1;
            }
            if(child==destination)
            {
                return dist[child];
            }
           
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        // adj[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int source, destinaton;
        cin >> source >> destinaton;
        memset(vis,false,sizeof(vis));
        memset(dist,0,sizeof(dist));

        int p = bfs(source, destinaton);
       
        cout<<p<<endl;
           if(p==-1)
           {
            cout<<"NO\n";
           }
           else
           {
            cout<<"YES\n";
           }
        
    }
    return 0;
}