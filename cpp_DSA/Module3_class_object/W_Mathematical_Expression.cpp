#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int a,b,c;
    char ch,ch1;
    cin>>a;
    cin.ignore();
    cin>>ch;
    cin>>b;
    cin.ignore();
    cin>>ch1;
    cin>>c;
    // cout<<a<<ch<<b<<ch1<<c<<endl;
        int sum=a+b;
         int sub=a-b;
         int mul=a*b;

        if(sum==c&&ch=='+')
        {
            cout<<"Yes\n";
        }
        else if(sum!=c&&ch=='+')
        {
            cout<<sum<<endl;
        }
       
        else if(sub==c&&ch=='-')
        {
            cout<<"Yes\n";
        }
          else if(sub!=c&&ch=='-')
        {
            cout<<sub<<endl;
        }
       else if(mul==c&&ch=='*')
        {
            cout<<"Yes\n";
            
        }
        else
        {
            cout<<mul<<endl;
        }

    
   
    return 0;
}