#include<bits/stdc++.h>
using namespace std;
class Myqueue
{
    public:
    list<int>l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    bool empty()
    {
        return l.empty();
    }
    void size()
    {
        cout<<"Size of queue:"<<l.size()<<endl;
    }
};
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    Myqueue q;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
       q.push(val);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}