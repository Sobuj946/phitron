#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int a,b;
    char ch;
   cin>>a;
    cin.ignore();
    cin>>ch;
   cin>>b;
   if(a>b&&ch=='>')
   {
    cout<<"Right\n";
   }
   else if(a==b&&ch=='=')
   {
    cout<<"Right\n";
   }
   else if(a<b&&ch=='<')
   {
    cout<<"Right\n";
   }
   else
   {
    cout<<"Wrong\n";
   }
    return 0;
}