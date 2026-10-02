#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--)
    {
        string a;
        cin>>a;
        if(a=="pop_back")
        {
            s.pop_back();
        }
    }
    return 0;
}