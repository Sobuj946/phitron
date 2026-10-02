#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b;
    cin>>a>>b;
    cout<<min(a,b)<<endl;
    cout<<max(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    cout<<max({1,23,3,2,8})<<endl;
    cout<<min({1,23,3,2,8})<<endl;

    
    return 0;
}