#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    char ch;
    cin>>ch;
    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        cout<<"ALPHA"<<endl;
        if(ch>='A'&&ch<='Z')
        {
            cout<<"IS CAPITAL"<<endl;
        }
        else
        {
            cout<<"IS SMALL"<<endl;
        }
    }
    else
        {
            cout<<"IS DIGIT\n";
        }
    return 0;
}