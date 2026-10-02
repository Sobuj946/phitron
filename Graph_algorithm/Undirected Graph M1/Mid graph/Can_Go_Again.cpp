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
long long int dis[1000005];

bool Bellman_ford()
{
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
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
        if (dis[a] != LLONG_MAX && dis[a] + c < dis[b])
        {
            cout << "Negative Cycle Detected\n";
            return false;
        }
    }
    return true;
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
    for (int i = 1; i <= n; i++)
    {
        dis[i] =LLONG_MAX;
    }
    int s;
    cin >> s;
    dis[s] = 0;

    int t;
    cin >> t;
    if (!Bellman_ford())
        return 0;
    while (t--)
    {
        int d;
        cin >> d;

        if (dis[d] == LLONG_MAX)
            cout << "Not Possible\n";
        else
        {
            cout << dis[d] << endl;
        }
    }
    return 0;
}