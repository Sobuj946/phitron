#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    cout<<"Queue size is:"<<q.size()<<endl;
    cout<<"Front value:"<<q.front()<<endl;
    cout<<"Back value:"<<q.back()<<endl;
    if(q.empty())
    {
        cout<<"Queue is empty!\n";
    }
    else
    {
        cout<<"Queue is not empty!\n";
    }
    cout<<"Print queue:"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}