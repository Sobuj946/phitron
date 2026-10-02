#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    stack<int>st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"Stack size is:"<<st.size()<<endl;
    if(st.empty())
    {
        cout<<"Stack is empty.\n";
    }
    else
    {
        cout<<"Not empty.\n";
    }
    
    return 0;
}