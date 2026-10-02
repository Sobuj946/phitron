#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    list<int>l={2,3,4,5,6,6,7,5};
    cout<<"Front value:"<<l.front()<<endl;
    cout<<"List back value:"<<l.back()<<endl;
    cout<<*l.begin()<<endl;
    cout<<*l.end()<<endl;//last value pawa jabe na
    return 0;
}