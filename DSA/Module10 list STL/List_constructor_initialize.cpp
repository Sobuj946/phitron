#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    // list<int>l(10);
    //list size 10
    // cout<<l.size()<<endl;

    // list<int>l(10,3);//every 10 value is 3
    // cout<<*(l.begin())<<endl;//list printing iterator

    // for(auto it=l.begin();it!=l.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    

    //Or

    // list<int>l1={2,3,4,5,6,4};
    // list<int>l2(l1);//constructor initialize
    // for(auto it:l2)
    // {
    //     cout<<it<<" ";
    // }


    //enter the array  in the list
    //array to list convert

    // int ar[]={1,23,4,5,6};
    // list<int>l1(ar,ar+5);

    //vector to list convert
    vector<int>v={1,2,3,4,56,7};
    list<int>l1(v.begin(),v.end());
    for(auto it:l1)
    {
        cout<<it<<" ";
    }
    return 0;
}