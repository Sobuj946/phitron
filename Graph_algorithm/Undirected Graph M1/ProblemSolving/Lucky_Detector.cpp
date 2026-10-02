#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long int n;
    cin>>n;
    string s=to_string(n);
    if(s.find('7')!=string::npos)
    {
        cout<<"Lucky\n";
    }
    else
    {
        cout<<"Not Lucky\n";
    }
  
    return 0;
}  