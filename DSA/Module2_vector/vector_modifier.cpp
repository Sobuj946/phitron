#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    vector<int>v={1,3,4,5,6,7};
    vector<int>v2;
    v2=v;//vector assigning or v2.assign(v)
    for(int x:v2)
    {
        cout<<x<<" ";
    }
    
    cout<<endl;
    vector<int>v1={2,2,34,2,8};
    v.insert(v.begin()+1,10);
    v2.insert(v2.begin(),v1.begin(),v1.end());
    v2.erase(v2.begin(),v2.begin()+5);
     for(int x:v2)
    {
        cout<<x<<" ";
    }
    auto it=find(v2.begin(),v2.end(),7);
    if(it==v2.end())
    {
        cout<<"This value is not find\n";
    }
    else
    {
        cout<<"This value is find\n";
    }
    return 0;
}