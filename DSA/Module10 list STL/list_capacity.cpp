#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    list<int>l={1,2,3,4,5,6};
    cout<<l.max_size()<<endl;//O(1)
    cout<<l.size()<<endl;//O(1)
    // l.clear();//O(N) clear all number
    cout<<l.size()<<endl;

    //resize 
    // l.resize(2);
    l.resize(9,100);//j gula man deya nei oi man gulo hbe 100
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    if(l.empty())
    {
        cout<<"List is empty\n"<<endl;
    }
    else
    {
        cout<<"Not empty\n";
    }

    return 0;
}