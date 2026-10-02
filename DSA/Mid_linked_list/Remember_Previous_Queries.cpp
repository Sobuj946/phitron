#include <bits/stdc++.h>
using namespace std;
void print_valL(list<int> l)
{
    cout << "L -> ";
    for (auto j : l)
    {
        cout << j << " ";
    }
    cout << endl;
}
void print_valR(list<int> l)
{
    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    list<int> l;
    while (q--)
    {
        int index, val;
        cin >> index >> val;
        int size = l.size();
        if (index == 0)
        {
            l.push_front(val);
        }
        else if (index == 1)
        {
            l.push_back(val);
        }
        else if (index == 2)
        {
            if (val < size && val >= 0)
            {
                l.erase(next(l.begin(), val));
            }
        }
        print_valL(l);
        print_valR(l);
    }
    return 0;
}