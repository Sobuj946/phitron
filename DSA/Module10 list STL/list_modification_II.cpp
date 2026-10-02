#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    list<int>l={1,23,4,5,6,7,6,6,6,8};
    cout<<"print list before erase:";
     for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //erase function using

    l.erase(next(l.begin(),1));
    cout<<"List print after erase:";
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    //replace function using replace value
    replace(l.begin(),l.end(),6,5);
    cout<<"replace 6 to 5:";
     for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    //find function
    auto it=find(l.begin(),l.end(),4);
    if(it==l.end())
    {
        cout<<"Not found 4 of list\n";
    }
    else
    {
        cout<<"Found of list\n";
    }
    //multiple value delete
    l.erase(next(l.begin(),2),next(l.begin(),5));
    cout<<"delete 2 to 5 index:";
    for(auto i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}