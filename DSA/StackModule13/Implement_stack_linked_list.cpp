#include <bits/stdc++.h>
using namespace std;
class mystack
{
public:
   list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        if (l.empty())
            return;
        else
            l.pop_back();
    }
    void top()
    {
        if (!l.empty())

            cout << l.back() << " ";
        else
            return;
    }
    void size()
    {
        cout << l.size() << " ";
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mystack s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        s.push(val);
    }
    while(!s.empty())
    {
    s.top();
    s.pop();
    }
    return 0;
}