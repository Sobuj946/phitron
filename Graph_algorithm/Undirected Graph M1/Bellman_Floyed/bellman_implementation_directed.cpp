#include <bits/stdc++.h>
using namespace std;

int n, e;
class Edges
{
public:
    int a, b, c;
    Edges(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
vector<Edges> edge_list;
int dis[1005];

void Bellman_ford()
{
     for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    bool cycle;
    cycle = false;
    for (auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
    {
        cout << "Negative Cycle detected\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << "->" << dis[i] << endl;
        }

        cout << "No cycle detect\n";
    }
}

int main()
{

    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edges(a, b, c));
    }
    // for(auto i:edge_list)
    // {
    //     cout<<i.a<<" "<<i.b<<" "<<i.c<<endl;
    // }
   for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
   
    dis[0] = 0;
    Bellman_ford();

    return 0;
}