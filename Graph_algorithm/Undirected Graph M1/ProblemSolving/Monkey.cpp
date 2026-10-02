#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string s;
    while(getline(cin,s))
    {
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}