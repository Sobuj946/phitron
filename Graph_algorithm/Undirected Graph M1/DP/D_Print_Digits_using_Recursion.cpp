#include<bits/stdc++.h>
using namespace std;

void digit_val(int n)
{
    if(n==0)
    {
        return;
    }
    
    digit_val(n/10);
    cout<<n%10<<" ";

}
int main(){
 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        digit_val(n);
        cout<<endl;
    }
    return 0;
}