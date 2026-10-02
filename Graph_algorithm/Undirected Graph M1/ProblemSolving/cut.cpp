#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005;

vector<int> adj[MAXN];
int strength[MAXN];

void dfs(int node, int parent, int depth) {
    strength[node] = 2 * depth;
    for (int child : adj[node]) {
        if (child != parent) {
            dfs(child, node, depth + 1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int>> edges;
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // undirected tree for traversal
        edges.push_back({u, v});
    }

    int q;
    cin >> q;
    set<pair<int,int>> cutEdges;
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        cutEdges.insert({u, v});
        cutEdges.insert({v, u});  // because adjacency is undirected
    }

    vector<bool> visited(n + 1, false);

    // Traverse all components after cuts
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            // DFS from this new root
            function<void(int,int,int)> dfs_comp = [&](int node, int par, int depth) {
                visited[node] = true;
                strength[node] = 2 * depth;
                for (int child : adj[node]) {
                    if (child != par && !cutEdges.count({node, child})) {
                        dfs_comp(child, node, depth + 1);
                    }
                }
            };
            dfs_comp(i, 0, 0);
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << strength[i] << " ";
    }
    cout << "\n";

    return 0;
}
