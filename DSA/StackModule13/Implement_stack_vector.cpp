#include <bits/stdc++.h>
using namespace std;
class mystack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.empty())
            return;
        else
            v.pop_back();
    }
    void top()
    {
        if (!v.empty())

            cout << v.back() << " ";
        else
            return;
    }
    void size()
    {
        cout << v.size() << " ";
    }
    bool empty()
    {
        return v.empty();
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