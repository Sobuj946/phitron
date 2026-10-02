#include<bits/stdc++.h>
using namespace std;
 int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>p;
        for(auto i:stones)
        {
            p.push(i);
        }
        while(p.size()>1)
        {
              int top1=p.top();
            p.pop();
            int top2=p.top();
            p.pop();
            int x=top1-top2;
            p.push(x);
        }
        while(!p.empty())
        {
            cout<<p.top()<<" ";
            p.pop();
        }
        return p.top();
    }
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int last=lastStoneWeight(v);
    cout<<last<<endl;
    return 0;
}