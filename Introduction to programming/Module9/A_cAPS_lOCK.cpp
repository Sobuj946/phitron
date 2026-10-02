#include<bits/stdc++.h>
using namespace std;
#include<string.h>
#include<math.h>
int main(){
    string s;
    getline(cin,s);
   if(islower(s[0]))
   {
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
   }
   else if(isupper(s[0]))
   {
    for(int i=1;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
   }
    cout<<s<<endl;
    return 0;
}